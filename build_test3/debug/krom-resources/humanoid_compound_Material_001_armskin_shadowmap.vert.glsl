#version 330
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform vec4 skinBones[40];
uniform mat3 N;
uniform mat4 W;
uniform mat4 LVP;

in vec3 pos;
in vec4 bone;
in vec4 weight;
in vec3 nor;

void getSkinningDualQuat(ivec4 bone_1, inout vec4 weight_1, inout vec4 A, inout vec4 B)
{
    ivec4 bonei = bone_1 * ivec4(2);
    mat4 matA = mat4(vec4(skinBones[bonei.x]), vec4(skinBones[bonei.y]), vec4(skinBones[bonei.z]), vec4(skinBones[bonei.w]));
    mat4 matB = mat4(vec4(skinBones[bonei.x + 1]), vec4(skinBones[bonei.y + 1]), vec4(skinBones[bonei.z + 1]), vec4(skinBones[bonei.w + 1]));
    vec3 _129 = weight_1.xyz * sign(matA[3] * matA).xyz;
    weight_1 = vec4(_129.x, _129.y, _129.z, weight_1.w);
    A = matA * weight_1;
    B = matB * weight_1;
    float invNormA = 1.0 / length(A);
    A *= invNormA;
    B *= invNormA;
}

void main()
{
    vec4 spos = vec4(pos, 1.0);
    vec4 param = weight;
    vec4 skinB;
    vec4 param_2 = skinB;
    vec4 param_1;
    getSkinningDualQuat(ivec4(bone), param, param_1, param_2);
    vec4 skinA = param_1;
    skinB = param_2;
    vec3 _190 = spos.xyz + (cross(skinA.xyz, cross(skinA.xyz, spos.xyz) + (spos.xyz * skinA.w)) * 2.0);
    spos = vec4(_190.x, _190.y, _190.z, spos.w);
    vec3 _213 = spos.xyz + ((((skinB.xyz * skinA.w) - (skinA.xyz * skinB.w)) + cross(skinA.xyz, skinB.xyz)) * 2.0);
    spos = vec4(_213.x, _213.y, _213.z, spos.w);
    vec3 wnormal = normalize(N * nor);
    vec3 wposition = vec4(W * spos).xyz;
    float Mix_005_fac = 1.0;
    vec3 Mix_005_Color_res = mix(vec3(1.0), vec3(0.0), vec3(Mix_005_fac));
    float disp = Mix_005_Color_res.x;
    wposition += ((wnormal * disp) * 0.100000001490116119384765625);
    gl_Position = LVP * vec4(wposition, 1.0);
}

