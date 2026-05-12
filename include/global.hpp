#pragma once

#include "ProfilerManager.hpp"

namespace global {

extern GLFWwindow* window;
extern ProfilerManager* profiler;

extern float time;

inline ivec2 getWinSize() {
  ivec2 res;
  glfwGetWindowSize(global::window, &res.x, &res.y);
  return res;
}

inline dvec2 getWinCenter() {
  return dvec2(getWinSize()) * 0.5;
}

inline dvec2 getMousePos() {
  dvec2 res;
  glfwGetCursorPos(global::window, &res.x, &res.y);
  return res;
}

} // namespace global

