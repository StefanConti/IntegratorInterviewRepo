#include "point_calculator.hpp"
#include <iostream>


int main() {
  PointCalculator pointCalc;
  Point2D pt1 = {0.0, 0.0};
  Point2D pt2 = {1.0, 2.0};
  float distance = pointCalc.calcDistance(pt1, pt2);
  std::cout << "Distance between pt1 and pt2 is: " << distance << std::endl;
}