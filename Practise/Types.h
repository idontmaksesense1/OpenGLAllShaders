#ifndef __Types__
#define __Types__

#include <GL/glew.h>
#include <assimp/cimport.h>

struct Vertex
{
	GLfloat position[3];
	GLfloat normal[3];
	GLfloat texcoords[2];
	GLfloat tangent[3];
	GLfloat bitangent[3];
};

struct Texture
{
	GLuint id;
	GLchar type[25];
	struct aiString path;
};

struct Mesh
{
	struct Vertex *vertices;
	GLuint *indices;
	struct Texture *textures;
	GLuint vao;
	GLuint vbo;
	GLuint ebo;
};

struct Model
{
	struct Texture *textures_loaded;
	struct Mesh *meshes;
	GLchar directory[50];
};

struct ShaderPair
{
	GLchar const *shader_source;
	GLenum shader_type;
};

#endif