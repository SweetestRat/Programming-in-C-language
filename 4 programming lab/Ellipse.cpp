#include "Ellipse.h"
#include <cmath>

void Ellipse::initFromDialog() {
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter center(x, y): ";
    cin >> center.x >> center.y;
    cout << "Enter mass: ";
    cin >> massf;
}

CVector2D Ellipse::position() const {
    return center;
}

double Ellipse::mass() const {
    return massf;
}

double Ellipse::square() const {
    return M_PI * (height/2) * (width/2);
}
double Ellipse::perimeter() const {
    return 4 * ((M_PI * (height/2) * (width/2) + ((width/2) - (height/2)))/(width/2 + height/2));
}

void Ellipse::draw() const {
    cout << "Height: " << height << endl;
    cout << "Width: " << width << endl;
    cout << "Center(x, y): " << center.x << ", " << center.y << endl;
    cout << "mass: " << massf << endl;
}

const char * Ellipse::classname() const {
    return "ellipse";
}

size_t Ellipse::size() const {
    return sizeof(height) + sizeof(width) + sizeof(center) + sizeof(massf);
}

