#include <iostream>
#include <cmath>

class Point {
    private:
        double x;
        double y;
    public:
        Point();
        Point(double x, double y);

        double getX() const;
        double getY() const;
        void setX(double value);
        void setY(double value);

        double distance(const Point&) const;
        bool operator==(const Point&) const;
        bool operator!=(const Point&) const;
        void operator+=(const Point&);
        void operator-=(const Point&);
        Point operator+(const Point&) const;
        Point operator-(const Point&) const;
};

std::ostream& operator<<(std::ostream&, const Point&);

