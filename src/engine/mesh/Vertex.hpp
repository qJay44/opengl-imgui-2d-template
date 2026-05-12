#pragma once

#include "VAO.hpp"

struct Vertex {
  vec2 position;

  static void link(const VAO& vao) {
    vao.linkAttrib(0, 2, GL_FLOAT, sizeof(Vertex), (void*)(0));
  }
};

