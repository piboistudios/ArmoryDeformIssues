#version 330
#ifdef GL_ARB_shading_language_420pack
#extension GL_ARB_shading_language_420pack : require
#endif

out vec4 fragColor;
in vec3 color;

void main()
{
    fragColor = vec4(color, 1.0);
}

