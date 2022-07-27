struct Point2D {
  float x;
  float y;
};

class PointCalculator {
public:
  bool isCloseEnough(Point2D pt1, Point2D pt2);
  float calcDistance(Point2D pt1, Point2D pt2);
};
