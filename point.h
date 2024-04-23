// point.h
#ifndef POINT_H
#define POINT_H

namespace geometry {
    class Point {
    private:
        double x, y;

    public:
        Point(double x_val, double y_val);
        double getX() const;
        double getY() const;
    };
}

#endif
