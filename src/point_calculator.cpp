#include "point_calculator.hpp"
#include <cmath>

bool PointCalculator::isCloseEnough(Point2D pt1, Point2D pt2) {
  float distance = calcDistance(pt1, pt2);
  if (distance < 5) {
    return true;
  } else {
    return false;
  }
}

float PointCalculator::calcDistance(Point2D pt1, Point2D pt2) {
  return std::sqrt((pt1.x - pt2.x) * (pt1.x - pt2.x) +
                   (pt1.y - pt2.y) * (pt1.y - pt2.y));
}
