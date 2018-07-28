#version 450
#define _Irr
#define _EnvCol
#define _Deferred
#define _CSM
#define _SMAA
#define _SSAO
void main() {
	vec3 n;
	float dotNV;
	float opacity;
	float Mix_001_fac = 1.0;
	vec3 Mix_001_Color_res = mix(vec3(1.0, 1.0, 1.0), vec3(1.0, 1.0, 1.0) * vec3(1.0, 1.0, 1.0), Mix_001_fac);
	float MixShader_fac = Mix_001_Color_res.x;
	float MixShader_fac_inv = 1.0 - MixShader_fac;
	opacity = ((((1.0 - vec3(1.0, 1.0, 1.0).r) * MixShader_fac_inv + 1.0 * MixShader_fac) * 0.5 + 1.0 * 0.5) * 0.5 + 1.0 * 0.5);
	if (opacity < 0.10000000149011612) discard;
}
