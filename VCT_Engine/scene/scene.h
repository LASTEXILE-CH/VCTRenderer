#pragma once
#include "camera.h"
#include "light.h"
#include "material.h"
#include "mesh.h"
#include "texture.h"
#include "node.h"

class Scene
{
    protected:
        std::string filepath;
        std::string directory;

    public:
        std::vector<Camera *> cameras;
        std::vector<Light *> lights;
        std::vector<Material *> materials;
        std::vector<OGLMesh *> meshes;
        std::vector<OGLTexture2D *> textures;
        Node rootNode;
        Scene();
        virtual ~Scene();
    private:
        // friends with
        friend class SceneImporter;
};
