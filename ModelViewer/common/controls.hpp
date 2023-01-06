#ifndef CONTROLS_HPP
#define CONTROLS_HPP


glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();
void computeMatricesFromInputs(glm::mat4 &ModelMatrix);

#endif