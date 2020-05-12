#include <iostream>
#include <cmath>
#include "Stack.h"

using namespace std;

template <typename P, typename N>
int Power(P& power, N& number)
{
    power -= 1;
    return (number = pow(number, power));
}

int main()
{
    float number = 2.5;
    int power = 4;

    Power(power, number);

    cout << number << endl;

    Stack<3, int> St;

    try
    {
        St.push(2);
        St.push(1);
        St.push(8);
        St.push(4);
    }
    catch(StackExceptionFull& ef)
    {
        cout << ef.what() << endl;
    }

    try
    {
        St.pop();
        St.pop();
        St.pop();
        St.pop();
    }
    catch(StackExceptionEmpty& ee)
    {
        cout << ee.what() << endl;
    }

    return 0;
}
