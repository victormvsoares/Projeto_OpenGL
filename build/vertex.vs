#version 330 core

layout (location = 0) in vec3 vPosition;
layout (location = 1) in vec3 vColor;

out vec3 vertexColor;

uniform float aspect;

void main()
{
    vec3 pos = vPosition;

    pos.x /= aspect;

    gl_Position = vec4(pos, 1.0);
    vertexColor = vColor;
}