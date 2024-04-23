// main.cpp
#include <iostream>
#include "circle.h"

using namespace std;
using namespace geometry;

bool lineIntersectsCircle(const Point& line_start, const Point& line_end, const Circle& circle) {
    double dx = line_end.getX() - line_start.getX();
    double dy = line_end.getY() - line_start.getY();
    double A = dx * dx + dy * dy;
    double B = 2 * (dx * (line_start.getX() - circle.getCenter().getX()) + dy * (line_start.getY() - circle.getCenter().getY()));
    double C = (line_start.getX() - circle.getCenter().getX()) * (line_start.getX() - circle.getCenter().getX()) + (line_start.getY() - circle.getCenter().getY()) * (line_start.getY() - circle.getCenter().getY()) - circle.getRadius() * circle.getRadius();
    double discriminant = B * B - 4 * A * C;

    return discriminant >= 0;
}

int main() {
    try {
        double x, y, radius;
        cout << "Enter the center coordinates of the circle (x y): ";
        cin >> x >> y;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        Point center(x, y);
        Circle circle(center, radius);

        Point line_start(0, 0);
        Point line_end(1, 1);


        if (lineIntersectsCircle(line_start, line_end, circle)) {
            cout << "The line intersects the circle." << endl;
        } else {
            cout << "The line does not intersect the circle." << endl;
        }

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
