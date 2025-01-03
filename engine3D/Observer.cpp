 #include "Observer.h"

Observer::Observer(Shader* readHandler){
	shader = readHandler;
	cameraPos = glm::vec3(0.0f, 0.0f, 0.0f);
	target = glm::vec3(0.0f, 0.0f, 0.0f);
	up = glm::vec3(0.0f, 1.0f, 0.0f);
	yaw = 0.0f;
	pitch = 0.0f;
    lastX = 0.0;
    lastY = 0.0;
    viewMatrix = glm::mat4(1.0f);
}

void Observer::updateCamera() {
    glm::vec3 direction;
    direction.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    direction.y = sin(glm::radians(pitch));
    direction.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    target = direction;
    viewMatrix = glm::lookAt(cameraPos, target, up);
    shader->use();
    GLint viewLoc = glGetUniformLocation(shader->getProgramId(), "viewMatrix");
    glUniformMatrix4fv(viewLoc, 1, GL_TRUE, glm::value_ptr(viewMatrix));
    GLint dirLoc = glGetUniformLocation(shader->getProgramId(), "spotlightDir");
    glm::vec3 spotlightDir = { -target.x, -target.y, target.z };
    glUniform3fv(dirLoc, 1, glm::value_ptr(spotlightDir));
}

Shader* Observer::getShader() { 
    return shader; 
}

glm::mat4 Observer::getviewMatrix() { 
    return viewMatrix; 
}

glm::vec3 Observer::getCameraPos() { 
    return cameraPos; 
}

glm::vec3 Observer::getTarget() { 
    return target; 
}

glm::vec3 Observer::getUp() { 
    return up; 
}

float Observer::getLastX() { 
    return lastX; 
}

float Observer::getLastY() { 
    return lastY; 
}

float Observer::getYaw() { 
    return yaw; 
}

float Observer::getPitch() { 
    return pitch; 
}

void Observer::setShader(Shader* readShader) { 
    shader = readShader;
}

void Observer::setviewMatrix(glm::mat4 readMatrix) { 
    viewMatrix = readMatrix;
}

void Observer::setCameraPos(glm::vec3 readPos) { 
    cameraPos = readPos;
}

void Observer::setTarget(glm::vec3 readTarget) { 
    target = readTarget;
}

void Observer::setUp(glm::vec3 readUp) { 
    up = readUp;
}

void Observer::setLastX(float readX) { 
    lastX = readX;
}

void Observer::setLastY(float readY) { 
    lastY = readY;
}

void Observer::setYaw(float readYaw) {
    yaw = readYaw;
}

void Observer::setPitch(float readPitch) { 
    pitch = readPitch;
}