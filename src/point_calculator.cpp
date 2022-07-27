#include "point_calculator.hpp"
#include <cmath>

float PointCalculator::calcDistance(Point2D pt1, Point2D pt2) {
  return std::sqrt(square(pt1.x - pt2.x) + square(pt1.y - pt2.y));
}

float PointCalculator::square(float number) { return number * number; }