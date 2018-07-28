#version 450
#define _Irr
#define _EnvCol
#define _Deferred
#define _CSM
#define _SMAA
#define _SSAO
in vec3 pos;
in vec3 nor;
uniform mat4 W;
uniform mat3 N;
uniform mat4 LVP;
void main() {
vec4 spos = vec4(pos, 1.0);
	vec3 wnormal = normalize(N * nor);
	vec3 wposition = vec4(W * spos).xyz;
	float Mix_005_fac = 1.0;
	vec3 Mix_005_Color_res = mix(vec3(1.0, 1.0, 1.0), vec3(1.0, 1.0, 1.0) * vec3(0.0, 0.0, 0.0), Mix_005_fac);
	float disp = Mix_005_Color_res.x;
	wposition += wnormal * disp * 0.1;
	gl_Position = LVP * vec4(wposition, 1.0);
}
