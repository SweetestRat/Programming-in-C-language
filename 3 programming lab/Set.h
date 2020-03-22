#ifndef UNTITLED22_SET_H
#define UNTITLED22_SET_H

using namespace std;

class Set
{
public:
    Set();
    Set operator+(const Set &)const;
    bool operator==(const Set&)const;
    bool operator!=(const Set&)const;
    bool operator+=(int);
    bool operator-=(int);
private:
    bool set[10];
};

#endif //UNTITLED22_SET_H
