#include "Line.h"

void Line::initFromDialog() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter center(x, y): ";
    cin >> center.x >> center.y;
    cout << "Enter mass: ";
    cin >> massf;
}

CVector2D Line::position() const {
    return center;
}

double Line::mass() const {
    return massf;
}

double Line::perimeter() const {
    return length;
}

void Line::draw() const {
    cout << "Length: " << length << endl;
    cout << "Center(x, y): " << center.x << ", " << center.y << endl;
    cout << "mass: " << massf << endl;
}

const char * Line::classname() const {
    return "line";
}

size_t Line::size() const {
    return sizeof(length) + sizeof(center) + sizeof(massf);
}