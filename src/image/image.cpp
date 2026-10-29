#include "image\image.h"
#include <ostream> 

std::ostream& operator<<(std::ostream& os, const Color& c) {
  os << "(" << c.r << ", " << c.g << ", " << c.b << ", " << c.a << ")";
  return os; 
}

