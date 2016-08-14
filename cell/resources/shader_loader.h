#ifndef CELL_RESOURCES_SHADER_LOADER
#define CELL_RESOURCES_SHADER_LOADER

#include <string>
#include <fstream>

#include "../shading/shader.h"

namespace Cell
{
    /* NOTE(Joey):

      A static helper class that does the relevant file IO to retrieve 


    */
    class ShaderLoader
    {
    public:
        static Shader Load(std::string vsPath, std::string fsPath);
    private:
        static std::string readShader(std::ifstream &file, std::string directory);
    };
}

#endif