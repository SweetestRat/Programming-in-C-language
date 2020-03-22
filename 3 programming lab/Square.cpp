#include "Square.h"
#include <iostream>

Square::Square(float Xld2, float Yld2, float Xrd2, float Yrd2, float Xlu2, float Ylu2, float Xru2, float Yru2, float side2, float angle2)
{
    Xld = Xld2;
    Yld = Yld2;
    Xrd = Xrd2;
    Yrd = Yrd2;
    Xlu = Xlu2;
    Ylu = Ylu2;
    Xru = Xru2;
    Yru = Yru2;
    side = side2;
    angle = angle2;
    area = side * side;
}

Vector::Vector(float x_end, float y_end): Xend(x_end), Yend(y_end) {}

bool Square::operator==(const Square &second2) const {
    return area == second2.area;
}

bool Square::operator!=(const Square &second2) const {
    return !Square::operator==(second2);
}

bool Square::operator>(const Square &second2) const {
    return area > second2.area;
}

bool Square::operator<(const Square &second2) const {
    return area < second2.area;
}

void Square::operator*=(float number) {
    side *= number;
    area = side * side;
}

void Square::operator+=(Vector vec) {
    Xld += vec.Xend;
    Yld += vec.Yend;
    Xrd += vec.Xend;
    Yrd += vec.Yend;
    Xlu += vec.Xend;
    Ylu += vec.Yend;
    Xru += vec.Xend;
    Yru += vec.Yend;
    cout << "New coordinates: " << Xld << ' ' << Yld << ' ' << Xrd << ' ' << Yrd << ' ' << Xlu << ' ' << Ylu << ' ' << Xru << ' ' << Yru << endl;
}


