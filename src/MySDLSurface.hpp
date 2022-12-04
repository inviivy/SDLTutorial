#pragma once

#include "SDL.h"
#include "SDL_image.h"

class SDL_Surface;

#include <string>

namespace HF {
class MySDLSurface {
  SDL_Surface *m_surface = nullptr;

public:
  MySDLSurface();

  MySDLSurface(const std::string &);

  MySDLSurface(SDL_Surface *);

  ~MySDLSurface();

  MySDLSurface(const MySDLSurface &) = delete;

  MySDLSurface &operator=(const MySDLSurface &) = delete;

  MySDLSurface(MySDLSurface &&);

  MySDLSurface &operator=(MySDLSurface &&);

  SDL_Surface *getSurfacePtr() const;

  bool available() const;
};
} // namespace HF