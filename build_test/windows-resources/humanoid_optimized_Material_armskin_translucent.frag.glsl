#version 330
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform vec4 shirr[7];
uniform vec4 casData[20];
uniform sampler2D ImageTexture;
uniform vec3 lightPos;
uniform int lightType;
uniform vec3 lightDir;
uniform bool receiveShadow;
uniform int lightShadow;
uniform vec3 eye;
uniform sampler2D shadowMap;
uniform float shadowsBias;
uniform samplerCube shadowMapCube;
uniform vec2 lightProj;
uniform vec2 spotlightData;
uniform vec3 backgroundCol;
uniform float envmapStrength;
uniform vec3 lightColor;

in vec3 wnormal;
in vec2 texCoord;
in vec3 eyeDir;
in vec3 wposition;
in vec4 lampPos;
in vec4 wvpposition;
out vec4 fragColor[2];

float attenuate(float dist)
{
    return 1.0 / (dist * dist);
}

mat4 getCascadeMat(float d, inout int casi, inout int casIndex)
{
    vec4 comp = vec4(float(d > casData[16].x), float(d > casData[16].y), float(d > casData[16].z), float(d > casData[16].w));
    casi = int(min(dot(vec4(1.0), comp), 4.0));
    casIndex = casi * 4;
    return mat4(vec4(casData[casIndex + 0]), vec4(casData[casIndex + 1]), vec4(casData[casIndex + 2]), vec4(casData[casIndex + 3]));
}

float shadowCompare(sampler2D shadowMap_1, vec2 uv, float compare)
{
    float depth = texture(shadowMap_1, uv).x;
    return step(compare, depth);
}

float shadowLerp(sampler2D shadowMap_1, vec2 uv, float compare, vec2 smSize)
{
    vec2 texelSize = vec2(1.0) / smSize;
    vec2 f = fract((uv * smSize) + vec2(0.5));
    vec2 centroidUV = floor((uv * smSize) + vec2(0.5)) / smSize;
    float lb = shadowCompare(shadowMap_1, centroidUV, compare);
    float lt = shadowCompare(shadowMap_1, centroidUV + (texelSize * vec2(0.0, 1.0)), compare);
    float rb = shadowCompare(shadowMap_1, centroidUV + (texelSize * vec2(1.0, 0.0)), compare);
    float rt = shadowCompare(shadowMap_1, centroidUV + texelSize, compare);
    float a = mix(lb, lt, f.y);
    float b = mix(rb, rt, f.y);
    float c = mix(a, b, f.x);
    return c;
}

float PCF(sampler2D shadowMap_1, vec2 uv, float compare, vec2 smSize)
{
    float result = shadowLerp(shadowMap_1, uv + (vec2(-1.0) / smSize), compare, smSize);
    result += shadowLerp(shadowMap_1, uv + (vec2(-1.0, 0.0) / smSize), compare, smSize);
    result += shadowLerp(shadowMap_1, uv + (vec2(-1.0, 1.0) / smSize), compare, smSize);
    result += shadowLerp(shadowMap_1, uv + (vec2(0.0, -1.0) / smSize), compare, smSize);
    result += shadowLerp(shadowMap_1, uv, compare, smSize);
    result += shadowLerp(shadowMap_1, uv + (vec2(0.0, 1.0) / smSize), compare, smSize);
    result += shadowLerp(shadowMap_1, uv + (vec2(1.0, -1.0) / smSize), compare, smSize);
    result += shadowLerp(shadowMap_1, uv + (vec2(1.0, 0.0) / smSize), compare, smSize);
    result += shadowLerp(shadowMap_1, uv + (vec2(1.0) / smSize), compare, smSize);
    return result / 9.0;
}

float lpToDepth(inout vec3 lp, vec2 lightProj_1)
{
    lp = abs(lp);
    float zcomp = max(lp.x, max(lp.y, lp.z));
    zcomp = lightProj_1.x - (lightProj_1.y / zcomp);
    return (zcomp * 0.5) + 0.5;
}

float PCFCube(samplerCube shadowMapCube_1, vec3 lp, inout vec3 ml, float bias, vec2 lightProj_1, vec3 n)
{
    vec3 param = lp - (n * 0.0030000000260770320892333984375);
    float _487 = lpToDepth(param, lightProj_1);
    float compare = _487 - (bias * 0.4000000059604644775390625);
    ml += (n * 0.0030000000260770320892333984375);
    float result = step(compare, texture(shadowMapCube_1, ml).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(0.001000000047497451305389404296875)).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(-0.001000000047497451305389404296875, 0.001000000047497451305389404296875, 0.001000000047497451305389404296875)).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(0.001000000047497451305389404296875, -0.001000000047497451305389404296875, 0.001000000047497451305389404296875)).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(0.001000000047497451305389404296875, 0.001000000047497451305389404296875, -0.001000000047497451305389404296875)).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(-0.001000000047497451305389404296875, -0.001000000047497451305389404296875, 0.001000000047497451305389404296875)).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(0.001000000047497451305389404296875, -0.001000000047497451305389404296875, -0.001000000047497451305389404296875)).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(-0.001000000047497451305389404296875, 0.001000000047497451305389404296875, -0.001000000047497451305389404296875)).x);
    result += step(compare, texture(shadowMapCube_1, ml + vec3(-0.001000000047497451305389404296875)).x);
    result /= 9.0;
    return result;
}

vec3 surfaceAlbedo(vec3 baseColor, float metalness)
{
    return mix(baseColor, vec3(0.0), vec3(metalness));
}

vec3 surfaceF0(vec3 baseColor, float metalness)
{
    return mix(vec3(0.039999999105930328369140625), baseColor, vec3(metalness));
}

vec3 lambertDiffuseBRDF(vec3 albedo, float nl)
{
    return albedo * max(0.0, nl);
}

float d_ggx(float nh, float a)
{
    float a2 = a * a;
    float denom = pow(((nh * nh) * (a2 - 1.0)) + 1.0, 2.0);
    return (a2 * 0.3183098733425140380859375) / denom;
}

float v_smithschlick(float nl, float nv, float a)
{
    return 1.0 / (((nl * (1.0 - a)) + a) * ((nv * (1.0 - a)) + a));
}

vec3 f_schlick(vec3 f0, float vh)
{
    return f0 + ((vec3(1.0) - f0) * exp2((((-5.554729938507080078125) * vh) - 6.9831600189208984375) * vh));
}

vec3 specularBRDF(vec3 f0, float roughness, float nl, float nh, float nv, float vh)
{
    float a = roughness * roughness;
    return (f_schlick(f0, vh) * (d_ggx(nh, a) * clamp(v_smithschlick(nl, nv, a), 0.0, 1.0))) / vec3(4.0);
}

vec3 shIrradiance(vec3 nor)
{
    vec3 cl00 = vec3(shirr[0].x, shirr[0].y, shirr[0].z);
    vec3 cl1m1 = vec3(shirr[0].w, shirr[1].x, shirr[1].y);
    vec3 cl10 = vec3(shirr[1].z, shirr[1].w, shirr[2].x);
    vec3 cl11 = vec3(shirr[2].y, shirr[2].z, shirr[2].w);
    vec3 cl2m2 = vec3(shirr[3].x, shirr[3].y, shirr[3].z);
    vec3 cl2m1 = vec3(shirr[3].w, shirr[4].x, shirr[4].y);
    vec3 cl20 = vec3(shirr[4].z, shirr[4].w, shirr[5].x);
    vec3 cl21 = vec3(shirr[5].y, shirr[5].z, shirr[5].w);
    vec3 cl22 = vec3(shirr[6].x, shirr[6].y, shirr[6].z);
    return ((((((((((cl22 * 0.429042994976043701171875) * ((nor.y * nor.y) - ((-nor.z) * (-nor.z)))) + (((cl20 * 0.743125021457672119140625) * nor.x) * nor.x)) + (cl00 * 0.88622701168060302734375)) - (cl20 * 0.2477079927921295166015625)) + (((cl2m2 * 0.85808598995208740234375) * nor.y) * (-nor.z))) + (((cl21 * 0.85808598995208740234375) * nor.y) * nor.x)) + (((cl2m1 * 0.85808598995208740234375) * (-nor.z)) * nor.x)) + ((cl11 * 1.02332794666290283203125) * nor.y)) + ((cl1m1 * 1.02332794666290283203125) * (-nor.z))) + ((cl10 * 1.02332794666290283203125) * nor.x);
}

void main()
{
    vec3 n = normalize(wnormal);
    vec3 TextureCoordinate_UV_res = vec3(texCoord.x, 1.0 - texCoord.y, 0.0);
    vec3 Mapping_Vector_res = TextureCoordinate_UV_res;
    vec4 ImageTexture_store = texture(ImageTexture, Mapping_Vector_res.xy);
    vec3 _687 = pow(ImageTexture_store.xyz, vec3(2.2000000476837158203125));
    ImageTexture_store = vec4(_687.x, _687.y, _687.z, ImageTexture_store.w);
    vec3 vVec = normalize(eyeDir);
    float dotNV = max(dot(n, vVec), 0.0);
    float Mix_001_fac = 1.0;
    vec3 Mix_001_Color_res = mix(vec3(1.0), vec3(1.0), vec3(Mix_001_fac));
    float MixShader_fac = Mix_001_Color_res.x;
    float MixShader_fac_inv = 1.0 - MixShader_fac;
    float Mix_002_fac = 1.0;
    vec3 ImageTexture_Color_res = ImageTexture_store.xyz;
    vec3 Mix_002_Color_res = mix(vec3(1.0), vec3(1.0) * ImageTexture_Color_res, vec3(Mix_002_fac));
    float Mix_003_fac = 1.0;
    vec3 Mix_003_Color_res = mix(vec3(0.0), vec3(0.0), vec3(Mix_003_fac));
    float Mix_004_fac = 1.0;
    vec3 Mix_004_Color_res = mix(vec3(1.0), vec3(1.0), vec3(Mix_004_fac));
    vec3 RGB_Color_res = vec3(0.4999999105930328369140625, 0.00069677201099693775177001953125, 0.0);
    vec3 basecol = (((vec3(0.800000011920928955078125) * MixShader_fac_inv) + (Mix_002_Color_res * MixShader_fac)) + Mix_003_Color_res) + RGB_Color_res;
    float roughness = (((((0.0 * MixShader_fac_inv) + (0.0 * MixShader_fac)) * 0.5) + (Mix_004_Color_res.x * 0.5)) * 0.5) + 0.0;
    float metallic = (((((0.0 * MixShader_fac_inv) + (0.0 * MixShader_fac)) * 0.5) + 0.5) * 0.5) + 0.0;
    float occlusion = (((((1.0 * MixShader_fac_inv) + (1.0 * MixShader_fac)) * 0.5) + 0.5) * 0.5) + 0.5;
    float specular = (((((1.0 * MixShader_fac_inv) + (0.0 * MixShader_fac)) * 0.5) + 0.5) * 0.5) + 0.0;
    float opacity = (((((0.0 * MixShader_fac_inv) + (1.0 * MixShader_fac)) * 0.5) + 0.5) * 0.5) + 0.5;
    float visibility = 1.0;
    vec3 lp = lightPos - wposition;
    vec3 l;
    if (lightType == 0)
    {
        l = lightDir;
    }
    else
    {
        l = normalize(lp);
        visibility *= attenuate(distance(wposition, lightPos));
    }
    vec3 h = normalize(vVec + l);
    float dotNL = dot(n, l);
    float dotNH = dot(n, h);
    float dotVH = dot(vVec, h);
    if (receiveShadow)
    {
        if (lightShadow == 1)
        {
            vec3 lPos;
            vec2 smSize;
            if (lightType == 0)
            {
                int param;
                int param_1;
                mat4 _868 = getCascadeMat(distance(eye, wposition), param, param_1);
                int casi = param;
                int casindex = param_1;
                mat4 LWVP = _868;
                vec4 lampPos_1 = LWVP * vec4(wposition, 1.0);
                lPos = lampPos_1.xyz / vec3(lampPos_1.w);
                smSize = vec2(4096.0, 1024.0);
            }
            else
            {
                lPos = lampPos.xyz / vec3(lampPos.w);
                smSize = vec2(1024.0);
            }
            visibility *= PCF(shadowMap, lPos.xy, lPos.z - shadowsBias, smSize);
        }
        else
        {
            if (lightShadow == 2)
            {
                vec3 param_2 = -l;
                float _927 = PCFCube(shadowMapCube, lp, param_2, shadowsBias, lightProj, n);
                visibility *= _927;
            }
        }
    }
    if (lightType == 2)
    {
        float spotEffect = dot(lightDir, l);
        if (spotEffect < spotlightData.x)
        {
            visibility *= smoothstep(spotlightData.y, spotlightData.x, spotEffect);
        }
    }
    vec3 albedo = surfaceAlbedo(basecol, metallic);
    vec3 f0 = surfaceF0(basecol, metallic);
    vec3 direct = lambertDiffuseBRDF(albedo, dotNL);
    direct += (specularBRDF(f0, roughness, dotNL, dotNH, dotNV, dotVH) * specular);
    vec3 indirect = shIrradiance(n);
    indirect *= albedo;
    indirect += (backgroundCol * f0);
    indirect *= envmapStrength;
    vec4 premultipliedReflect = vec4(vec3(((direct * lightColor) * visibility) + (indirect * occlusion)) * opacity, opacity);
    float fragZ = wvpposition.z / wvpposition.w;
    float w = clamp((pow(min(1.0, premultipliedReflect.w * 10.0) + 0.00999999977648258209228515625, 3.0) * 100000000.0) * pow(1.0 - (fragZ * 0.89999997615814208984375), 3.0), 0.00999999977648258209228515625, 3000.0);
    fragColor[0] = vec4(premultipliedReflect.xyz * w, premultipliedReflect.w);
    fragColor[1] = vec4(premultipliedReflect.w * w, 0.0, 0.0, 1.0);
}

