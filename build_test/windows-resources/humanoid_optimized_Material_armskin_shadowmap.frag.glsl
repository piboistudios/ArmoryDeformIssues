#version 330
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

void main()
{
    float Mix_001_fac = 1.0;
    vec3 Mix_001_Color_res = mix(vec3(1.0), vec3(1.0), vec3(Mix_001_fac));
    float MixShader_fac = Mix_001_Color_res.x;
    float MixShader_fac_inv = 1.0 - MixShader_fac;
    float opacity = (((((0.0 * MixShader_fac_inv) + (1.0 * MixShader_fac)) * 0.5) + 0.5) * 0.5) + 0.5;
    if (opacity < 0.100000001490116119384765625)
    {
        discard;
    }
}

