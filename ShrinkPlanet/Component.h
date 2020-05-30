#pragma once
//#include "EmptyObject.h"

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/string_cast.hpp>
#include <time.h> 
#include <stdio.h> 
#include <iostream>
#include <GL/glew.h> 
#include <GL/glut.h> 
#include <vector>
#include <time.h>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
#include "LoadShaders.h"
#include "loadobj.h"
#include "tiny_obj_loader.h"


using namespace tinyobj;

using namespace std;
using namespace glm;

class Component{

public:

	Component() {};

	int kyu;

	virtual void ActivateComponent(mat4);
	virtual void ActivateComponent(int,mat4,mat4,mat4);
	virtual void InitComponent();
	//virtual void LoadTexture(const char* basedir, vector<real_t> texcoords_out, map<string, size_t> texmap_out, const vector<real_t> texcoords, const vector<shape_t> shapes, const vector<material_t> materials, GLint min_filter, GLint mag_filter);
	virtual void LoadTexture(const char* basedir , const vector<real_t>& texcoords, GLint min_filter= GL_LINEAR_MIPMAP_LINEAR, GLint mag_filter= GL_LINEAR_MIPMAP_LINEAR);
	virtual void LoadObj(const char* filename, const char* basedir, attrib_t& attrib, real_t scale);
};

