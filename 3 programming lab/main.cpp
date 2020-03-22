#include <iostream>
#include "Set.h"
#include "Square.h"

using namespace std;

int main()
{
    Set first;
    Set second;

    first += 0;
    first += 1;
    first += 2;
    first += 3;
    first += 4;
    second += 5;
    second += 6;
    second += 7;
    second += 8;
    second += 9;

    first -= 4;
    first -= 3;
    second -= 9;

    first + second;

    if(first == second)
        cout << "1. Sets are equal\n";
    else
        cout << "1. Sets are not equal\n";

    if(first != second)
        cout << "2. Sets are not equal\n";
    else
        cout << "2. Sets are equal\n";

    Square first2 = Square(2, 0, 4, 2, 0, 2, 2, 4, 2, 45);
    Square second2 = Square(2, 1, 5, 1, 2, 4, 5, 4, 3, 0);

    first2 *= 1.5;

    if(first2 == second2)
        cout << "3. Areas are equal\n";
    else
        cout << "3. Areas are not equal\n";

    if(first2 != second2)
        cout << "4. Areas are not equal\n";
    else
        cout << "4. Areas are equal\n";

    if(first2 > second2)
        cout << "5. Area of the first2 is greater than the area of the second2\n";
    else
        cout << "5. Area of the second2 is greater than the area of the first2\n";

    if(first2 < second2)
        cout << "6. Area of the first2 is less than the area of the second2\n";
    else
        cout << "6. Area of the second2 is greater than the area of the first2\n";

    Vector vec(2, 2);

     second2 += vec;

    return 0;
}
