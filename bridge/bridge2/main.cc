#include <iostream>

#include "circle.hpp"
#include "d1.hpp"
#include "d2.hpp"

int main(void) {
  DrawingAPI1 dap1;
  DrawingAPI2 dap2;
  CircleShape circle1(1, 2, 3, &dap1);
  CircleShape circle2(5, 7, 11, &dap2);
  circle1.resizeByPercentage(2.5);
  circle2.resizeByPercentage(2.5);
  circle1.draw();
  circle2.draw();
  return 0;
}
