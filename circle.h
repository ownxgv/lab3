// circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"
#include <stdexcept>

namespace geometry {
    class Circle {
    private:
        Point center;
        double radius;

    public:
        Circle(const Point& center_val, double radius_val);
        double getRadius() const;
        const Point& getCenter() const;
    };
}

#endif
