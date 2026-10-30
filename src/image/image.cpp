#include "image/image.h""
#include <ostream> 

std::ostream& operator<<(std::ostream& os, const Color& c) {
  os << '(' << int(c.r) << ', ' << int(c.g) << ', ' << int(c.b) << ', ' << int(c.a) << ')';
  return os; 
}

