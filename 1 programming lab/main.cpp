#include <iostream>
#include "tasks.h"

using namespace std;

int main()
{
    // pointer first task (3)

    cout << "First task (3): " << endl << endl;

    int value1pointer;
    int value2pointer;

    cout << "Enter value1(pointer): " << endl;
    cin >> value1pointer;
    cout << "Enter value2(pointer): " << endl;
    cin >> value2pointer;

    cout << "Values before(pointer): " << value1pointer << ' ' << value2pointer << endl;

    FirstTaskPointer(&value1pointer, &value2pointer);

    cout << "After(pointer): " << value1pointer << ' ' << value2pointer << endl << endl;

    // link first task (3)

    int value1link;
    int value2link;

    cout << "Enter value1(link): " << endl;
    cin >> value1link;
    cout << "Enter value2(link): " << endl;
    cin >> value2link;

    cout << "Values before(link): " << value1link << ' ' << value2link << endl;

    FirstTaskLink(value1link, value2link);

    cout << "After(link): " << value1link << ' ' << value2link << endl << endl;

    // pointer second task (8)

    cout << "Second task (8): " << endl << endl;

    float value8pointer;

    cout << "Enter value(pointer): " << endl;
    cin >> value8pointer;

    cout << "Value before(pointer): " << value8pointer << endl;

    SecondTaskPointer(&value8pointer);

    cout << "After(pointer): " << value8pointer << endl << endl;

    // link second task (8)

    float value8link;

    cout << "Enter value(link): " << endl;
    cin >> value8link;

    cout << "Value before(link): " << value8link << endl;

    SecondTaskLink(value8link);

    cout << "After(link): " << value8link << endl << endl;

    // pointer third task (11)

    int value11pointer;
    int numberpointer;

    cout << "Enter circle radius(pointer): " << endl;
    cin >> value11pointer;
    cout << "Enter number(pointer): " << endl;
    cin >> numberpointer;


    cout << "Radius before(pointer): " << value11pointer << endl;

    ThirdTaskPointer(&value11pointer, &numberpointer);

    cout << "After(pointer): " << value11pointer << endl << endl;

    // link third task (11)

    int value11link;
    int numberlink;

    cout << "Enter circle radius(link): " << endl;
    cin >> value11link;
    cout << "Enter number(link): " << endl;
    cin >> numberlink;


    cout << "Radius before(link): " << value11link << endl;

    ThirdTaskLink(value11link, numberlink);

    cout << "After(link): " << value11link << endl << endl;

    // pointer fourth task (16)

    int a, b;

    int Matrix[9];

    cout << "Fill in the matrix[3][3](pointer): " << endl;

    for(int i = 0 ; i < 9; ++i)
    {
            cin >> Matrix[i];
    }

    cout << "Which lines do you want to change?" << endl;
    cin >> a >> b;

    cout << "Matrix before(pointer): " << endl;

    for(int i = 0 ; i < 3; ++i)
    {
        for(int j = i * 3; j < i * 3 + 3; ++j)
        {
            cout << Matrix[j] << ' ';
        }
        cout << endl;
    }

   FourthTaskPointer(&a, &b, Matrix);

    cout << "After(pointer): " << endl;

    for(int i = 0 ; i < 3; ++i)
    {
        for(int j = i * 3; j < i * 3 + 3; ++j)
        {
            cout << Matrix[j] << ' ';
        }
        cout << endl;
    }

    cout << endl;

// link fourth task (16)

    int a1, b1;

    int MatrixL[9];

    cout << "Fill in the matrix[3][3](link): " << endl;

    for(int i = 0 ; i < 9; ++i)
    {
        cin >> MatrixL[i];
    }

    cout << "Which lines do you want to change?" << endl;
    cin >> a1 >> b1;

    cout << "Matrix before(link): " << endl;

    for(int i = 0 ; i < 3; ++i)
    {
        for(int j = i * 3; j < i * 3 + 3; ++j)
        {
            cout << MatrixL[j] << ' ';
        }
        cout << endl;
    }

    FourthTaskLink(a1, b1, MatrixL);

    cout << "After(link): " << endl;

    for(int i = 0 ; i < 3; ++i)
    {
        for(int j = i * 3; j < i * 3 + 3; ++j)
        {
            cout << MatrixL[j] << ' ';
        }
        cout << endl;
    }

    return 0;
}