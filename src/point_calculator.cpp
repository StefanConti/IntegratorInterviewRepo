#include "point_calculator.hpp"
#include <cmath>

float PointCalculator::calcDistance(Point2D pt1, Point2D pt2) {
  return std::sqrt((pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y - pt2.y) * (pt1.y - pt2.y));
}