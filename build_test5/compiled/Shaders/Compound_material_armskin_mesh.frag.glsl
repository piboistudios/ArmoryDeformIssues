#version 450
#define _Irr
#define _EnvCol
#define _Deferred
#define _CSM
#define _SMAA
#define _SSAO
#include "compiled.glsl"
#include "std/gbuffer.glsl"
in vec3 wposition;
in vec3 wnormal;
out vec4[2] fragColor;
void main() {
vec3 n = normalize(wnormal);
	vec3 basecol;
	float roughness;
	float metallic;
	float occlusion;
	float specular;
	basecol = (vec3(0.0, 0.005846207961440086, 0.8000000715255737) + vec3(0.8));
	roughness = (0.0 * 0.5 + 0.0 * 0.5);
	metallic = (0.0 * 0.5 + 0.0 * 0.5);
	occlusion = (1.0 * 0.5 + 1.0 * 0.5);
	specular = (0.0 * 0.5 + 1.0 * 0.5);
	n /= (abs(n.x) + abs(n.y) + abs(n.z));
	n.xy = n.z >= 0.0 ? n.xy : octahedronWrap(n.xy);
	fragColor[0] = vec4(n.xy, packFloat(metallic, roughness), 1.0 - gl_FragCoord.z);
	fragColor[1] = vec4(basecol.rgb, packFloat2(occlusion, specular));
}
