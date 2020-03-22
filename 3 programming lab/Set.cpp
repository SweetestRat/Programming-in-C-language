#include "Set.h"

using namespace std;

Set::Set() {
    set[10] = {false};
}

Set Set::operator+(const Set &second)const {
    Set third;
    for(int i = 0; i < 10; ++i)
    {
        if(set[i])
            third.set[i] = set[i];
        if(second.set[i])
            third.set[i] = second.set[i];
    }
    return third;
}

bool Set::operator==(const Set &second)const {
    for(int i = 0; i < 10; ++i)
    {
        if(set[i] != second.set[i])
            return false;
    }
    return true;
}

bool Set::operator!=(const Set &second)const {
    return !Set::operator==(second);
}

bool Set::operator+=(int number) {
    set[number] = true;
    return set[number];
}

bool Set::operator-=(int number) {
    set[number] = false;
    return !set[number];
}