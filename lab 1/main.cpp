#include <iostream>
#include "tasks.h"

int main()
{

    // pointer first task (3)
    std::cout << "First task (3): " << std::endl << std::endl;

    int value1pointer;
    int value2pointer;

    std::cout << "Enter value1(pointer): " << std::endl;
    std::cin >> value1pointer;
    std::cout << "Enter value2(pointer): " << std::endl;
    std::cin >> value2pointer;

    std::cout << "Values before(pointer): " << value1pointer << ' ' << value2pointer << std::endl;

    FirstTaskPointer(&value1pointer, &value2pointer);

    std::cout << "After(pointer): " << value1pointer << ' ' << value2pointer << std::endl << std::endl;

    // link first task (3)

    int value1link;
    int value2link;

    std::cout << "Enter value1(link): " << std::endl;
    std::cin >> value1link;
    std::cout << "Enter value2(link): " << std::endl;
    std::cin >> value2link;

    std::cout << "Values before(link): " << value1link << ' ' << value2link << std::endl;

    FirstTaskLink(value1link, value2link);

    std::cout << "After(link): " << value1link << ' ' << value2link << std::endl << std::endl;

    // pointer second task (8)

    std::cout << "Second task (8): " << std::endl << std::endl;

    float value8pointer;

    std::cout << "Enter value(pointer): " << std::endl;
    std::cin >> value8pointer;

    std::cout << "Value before(pointer): " << value8pointer << std::endl;

    SecondTaskPointer(&value8pointer);

    std::cout << "After(pointer): " << value8pointer << std::endl << std::endl;

    // link second task (8)

    float value8link;

    std::cout << "Enter value(link): " << std::endl;
    std::cin >> value8link;

    std::cout << "Value before(link): " << value8link << std::endl;

    SecondTaskLink(value8link);

    std::cout << "After(link): " << value8link << std::endl << std::endl;

    // pointer third task (11)

    int value11pointer;
    int numberpointer;

    std::cout << "Enter circle radius(pointer): " << std::endl;
    std::cin >> value11pointer;
    std::cout << "Enter number(pointer): " << std::endl;
    std::cin >> numberpointer;


    std::cout << "Radius before(pointer): " << value11pointer << std::endl;

    ThirdTaskPointer(&value11pointer, &numberpointer);

    std::cout << "After(pointer): " << value11pointer << std::endl << std::endl;

    // link third task (11)

    int value11link;
    int numberlink;

    std::cout << "Enter circle radius(link): " << std::endl;
    std::cin >> value11link;
    std::cout << "Enter number(link): " << std::endl;
    std::cin >> numberlink;


    std::cout << "Radius before(link): " << value11link << std::endl;

    ThirdTaskLink(value11link, numberlink);

    std::cout << "After(link): " << value11link << std::endl << std::endl;

    // pointer fourth task (16)

    int n;
    int m;
    int a, b;

    std::cout << "Enter lines number :" << std::endl;
    std::cin >> n;
    std::cout << "Enter columns number :" << std::endl;
    std::cin >> m;

    int matrix[n * m];
    int temp[m];

    std::cout << "Fill in the matrix: " << std::endl;

    for(int i = 0; i < n * m; ++i)
    {
        std::cin >> matrix[i];
    }

    std::cout << "Which lines do you want to change?" << std::endl;
    std::cin >> a >> b;

    std::cout << "Matrix before(pointer): " << std::endl;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            std::cout << matrix[j + m * i] << ' ';
        }
        std::cout << std::endl;
    }

    FourthTaskPointer(&a, &b, &m, matrix, temp);

    std::cout << "After(pointer): " << std::endl;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            std::cout << matrix[j + m * i] << ' ';
        }
        std::cout << std::endl;
    }

    return 0;

}
