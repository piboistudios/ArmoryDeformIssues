#version 330
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform mat3 N;
uniform mat4 W;
uniform mat4 LVP;

in vec3 pos;
in vec3 nor;

void main()
{
    vec4 spos = vec4(pos, 1.0);
    vec3 wnormal = normalize(N * nor);
    vec3 wposition = vec4(W * spos).xyz;
    float Mix_005_fac = 1.0;
    vec3 Mix_005_Color_res = mix(vec3(1.0), vec3(0.0), vec3(Mix_005_fac));
    float disp = Mix_005_Color_res.x;
    wposition += ((wnormal * disp) * 0.100000001490116119384765625);
    gl_Position = LVP * vec4(wposition, 1.0);
}

