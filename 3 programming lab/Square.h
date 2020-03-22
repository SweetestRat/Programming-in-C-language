#ifndef UNTITLED22_SQUARE_H
#define UNTITLED22_SQUARE_H

using namespace std;

class Vector
{
public:
    Vector(float, float);
    float Xend;
    float Yend;
};

class Square
{
public:
    Square(float, float, float, float, float, float, float, float, float, float);
    bool operator==(const Square&)const;
    bool operator!=(const Square&)const;
    bool operator>(const Square&)const;
    bool operator<(const Square&)const;
    void operator*=(float);
    void operator+=(Vector);
private:
    float Xld, Yld, Xrd, Yrd, Xlu, Ylu, Xru, Yru;
    float side;
    float angle;
    float area;
};

#endif //UNTITLED22_SQUARE_H
