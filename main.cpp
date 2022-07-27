#include "point_calculator.hpp"
#include <iostream>

int main() {
  // init point calculator in points pt1 and pt2
  PointCalculator pointCalc;
  Point2D pt1 = {0.0, 0.0};
  Point2D pt2 = {1.0, 2.0};

  // calc distance between pt1 and pt2 and check if they are close enough
  float distance = pointCalc.calcDistance(pt1, pt2);
  bool isClosePt2 = pointCalc.isCloseEnough(pt1, pt2);
  std::cout << "Distance between pt1 and pt2 is: " << distance << std::endl;
  std::cout << "pt1 and pt2 are close enough: " << isClosePt2 << std::endl;

  // calc distance between pt1 and new pt3 and check if they are close enough
  Point2D pt3 = {4.0, 4.0};
  distance = pointCalc.calcDistance(pt1, pt3);
  bool isClosePt3 = pointCalc.isCloseEnough(pt1, pt3);
  std::cout << "Distance between pt1 and pt3 is: " << distance << std::endl;
  std::cout << "pt1 and pt2 are close enough: " << isClosePt3 << std::endl;
}
