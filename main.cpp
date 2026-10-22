#include "tgaimage.h"

constexpr TGAColor white =   {255, 255, 255, 255};
constexpr TGAColor green   = {  0, 255,   0, 255};
constexpr TGAColor red     = {  0,   0, 255, 255};
constexpr TGAColor blue    = {255, 128,  64, 255};
constexpr TGAColor yellow  = {  0, 200, 255, 255};

int main() {
  constexpr int width = 128; 
  constexpr int height = 128;

  TGAImage framebuffer(width, height, TGAImage::RGB);

  int ax = 4, ay = 9;
  int bx = 29, by = 52;
  int cx = 67, cy = 67;
  
  framebuffer.set(ax, ay, white);
  framebuffer.set(bx, by, red);
  framebuffer.set(cx, cy, yellow);

  framebuffer.write_tga_file("framebuffer.tga");
  return 0;
}