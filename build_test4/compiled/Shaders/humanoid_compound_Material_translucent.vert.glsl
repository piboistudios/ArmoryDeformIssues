#version 450
#define _Irr
#define _EnvCol
#define _Deferred
#define _CSM
#define _SMAA
#define _SSAO
in vec3 pos;
in vec3 nor;
in vec2 tex;
out vec3 wposition;
out vec2 texCoord;
out vec3 wnormal;
out vec3 eyeDir;
out vec4 lampPos;
out vec4 wvpposition;
uniform mat3 N;
uniform mat4 W;
uniform mat4 VP;
uniform vec3 eye;
uniform int lightShadow;
uniform mat4 LWVP;
void main() {
    vec4 spos = vec4(pos, 1.0);
wposition = vec4(W * spos).xyz;
texCoord = tex;
	wnormal = normalize(N * nor);
	float Mix_005_fac = 1.0;
	vec3 Mix_005_Color_res = mix(vec3(1.0, 1.0, 1.0), vec3(1.0, 1.0, 1.0) * vec3(0.0, 0.0, 0.0), Mix_005_fac);
	float disp = Mix_005_Color_res.x;
	wposition += wnormal * disp * 0.1;
	gl_Position = VP * vec4(wposition, 1.0);
	eyeDir = eye - wposition;
	if (lightShadow == 1) lampPos = LWVP * spos;
	wvpposition = gl_Position;
}
