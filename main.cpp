#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point a(3, 7);
    Point b(4, 9);
    Point c;

    cout << "Distance: " << a.distance(b) << endl;
    
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
 
    if ( a != b ) {
        cout << a << " is not equal to " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }

    a += b;
    cout << "increment a: " << a << endl;
    a -= b;
    cout << "decrement a: " << a << endl;

    cout << "sum(a, b): " << a+b << endl;
    cout << "diff(a, b): " << a-b << endl;

    return 0;
}