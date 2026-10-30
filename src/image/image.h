#pragma once

#include <cstdint>
#include <iosfwd>

struct Color {
  std::int8_t r = 0;
  std::int8_t g = 0;
  std::int8_t b = 0;
  std::int8_t a = 255;

  bool operator== (const Color& other) const = default; 
};

inline constexpr Color cBlack = {0, 0, 0, 255};
inline constexpr Color cWhite = {255, 255, 255, 255};
inline constexpr Color cRed = {255, 0, 0, 255};
inline constexpr Color cBlue = {0, 0, 255, 255};
inline constexpr Color cGreen = {0, 255, 0, 255};
inline constexpr Color cYellow = {255, 255, 0, 255};
inline constexpr Color cCyan = {0, 255, 255, 255};
inline constexpr Color cTransparent = {0, 0, 0, 0};

std::ostream& operator<<(std::ostream& os, const Color& c);