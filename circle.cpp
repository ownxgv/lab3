// circle.cpp
#include "circle.h"

namespace geometry {
    Circle::Circle(const Point& center_val, double radius_val) : center(center_val) {
        if (radius_val < 0) {
            throw std::invalid_argument("Radius cannot be negative");
        }
        radius = radius_val;
    }

    double Circle::getRadius() const {
        return radius;
    }

    const Point& Circle::getCenter() const {
        return center;
    }
}
