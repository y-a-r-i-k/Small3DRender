#pragma once

#include <cstdint>
#include <iosfwd>

struct Color {
  int8_t r = 0;
  int8_t g = 0;
  int8_t b = 0;
  int8_t a = 255;

  bool operator== (const Color& other) const = default; 
};

inline constexpr Color BLACK = {0, 0, 0, 255};
inline constexpr Color WHITE = {255, 255, 255, 255};
inline constexpr Color RED = {255, 0, 0, 255};
inline constexpr Color BLUE = {0, 0, 255, 255};
inline constexpr Color GREEN = {0, 255, 0, 255};
inline constexpr Color YELLOW = {255, 255, 0, 255};
inline constexpr Color CYAN = {0, 255, 255, 255};
inline constexpr Color TRANSPARENT = {0, 0, 0, 0};

std::ostream& operator<<(std::ostream& os, const Color& c);