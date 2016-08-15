#include "Point.h"

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const {
    return x;
}
double Point::getY() const {
    return y;
}

void Point::setX(double value) {
    this->x = value;
}
void Point::setY(double value) {
    this->y = value;
}

double Point::distance(const Point& other) const {
    return hypot(x-other.x, y-other.y);
}
bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}
bool Point::operator!=(const Point& other) const {
    return !operator==(other);
}
void Point::operator+=(const Point& other) {
    x += other.x;
    y += other.y;
}
void Point::operator-=(const Point& other) {
    x -= other.x;
    y -= other.y;
}
Point Point::operator+(const Point& other) const {
    Point sum = *this;
    sum += other;
    return sum;
}
Point Point::operator-(const Point& other) const {
    Point diff = *this;
    diff -= other;
    return diff;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}