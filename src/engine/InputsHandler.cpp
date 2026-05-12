#include "InputsHandler.hpp"

#include "gui/gui.hpp"
#include "global.hpp"

using global::window;

dvec2 InputsHandler::mousePos;

void InputsHandler::keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods) {
  switch (key) {
    case GLFW_KEY_E:
      if (action == GLFW_PRESS) gui::toggleConfig();
      break;
    case GLFW_KEY_C:
      if (action == GLFW_PRESS) gui::toggleInfo();
      break;
  }

  gui::keyCallback(window, key, scancode, action, mods);
}

void InputsHandler::scrollCallback(GLFWwindow* window, double xoffset, double yoffset) {
  gui::scrollCallback(window, xoffset, yoffset);
}

void InputsHandler::cursorPosCallback(GLFWwindow* window, double xpos, double ypos) {
  mousePos = {xpos, ypos};
  gui::cursorPosCallback(window, xpos, ypos);
}

void InputsHandler::process() {
  if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
    glfwSetWindowShouldClose(window, GLFW_TRUE);
}

