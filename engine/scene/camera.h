#pragma once

#include <glm/detail/type_vec3.hpp>
#include <glm/mat4x4.hpp>

#include "../util/single_active.h"

class Camera : public SingleActive<Camera>
{
    public:
        Camera();

        float clipPlaneFar;
        float clipPlaneNear;
        float horizontalFoV;
        float aspectRatio;
        glm::vec3 lookAt;
        glm::vec3 position;
        glm::vec3 up;

        glm::mat4x4 GetViewMatrix() const;
        glm::mat4x4 GetProjecctionMatrix() const;
};
