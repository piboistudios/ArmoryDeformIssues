#version 330
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

uniform mat4 W;
uniform mat3 N;
uniform mat4 VP;
uniform vec3 eye;
uniform int lightShadow;
uniform mat4 LWVP;

in vec3 pos;
out vec3 wposition;
out vec2 texCoord;
in vec2 tex;
out vec3 wnormal;
in vec3 nor;
out vec3 eyeDir;
out vec4 lampPos;
out vec4 wvpposition;

void main()
{
    vec4 spos = vec4(pos, 1.0);
    wposition = vec4(W * spos).xyz;
    texCoord = tex;
    wnormal = normalize(N * nor);
    float Mix_005_fac = 1.0;
    vec3 Mix_005_Color_res = mix(vec3(1.0), vec3(0.0), vec3(Mix_005_fac));
    float disp = Mix_005_Color_res.x;
    wposition += ((wnormal * disp) * 0.100000001490116119384765625);
    gl_Position = VP * vec4(wposition, 1.0);
    eyeDir = eye - wposition;
    if (lightShadow == 1)
    {
        lampPos = LWVP * spos;
    }
    wvpposition = gl_Position;
}

