#ifndef SHADER_HPP
#define SHADER_HPP

#include <cstdlib>
#include <string>

namespace glshader {
	/**
	@brief function to load glsl shaders
	include vertex shader and fragment shader
	@param std::string vertex_file_path: vertex shader file name
	@param std::string fragment_file_path: fragment shader file name
	@return GLuint: shader program ID
	*/
	GLuint LoadShaders(std::string vertex_file_path, std::string fragment_file_path);

	/**
	@brief function to create glsl shaders
	include vertex shader and fragment shader
	@param std::string vertex: vertex shader
	@param std::string fragment: fragment shader
	@return GLuint: shader program ID
	*/
	GLuint CreateShaders(std::string vertex, std::string fragment);

	void StringReplace(std::string &strBase, std::string strSrc, std::string strDes);
	
}
#endif
