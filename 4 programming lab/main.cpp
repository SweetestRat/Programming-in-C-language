#include <iostream>
#include <vector>
#include "Line.h"
#include "Ellipse.h"
#include "4lab.h"

using namespace std;

int main()
{
    vector <BaseCObject*> array;
    char command = 0;
    double sumArea = 0;
    double sumPerimeter = 0;
    double sumMassCenter = 0;
    double sumMemory = 0;

    while(command != '9')
    {
        cout << "======MENU======\n"
                "1. Add an ellipse\n"
                "2. Add a line\n"
                "3.Draw\n"
                "4. Area\n"
                "5. Perimeter\n"
                "6. Mass center\n"
                "7. Memory\n"
                "8. Sort\n"
                "9. Exit\n"
                "Enter a command: \n" << endl;

        cin >> command;

        if(command == '1')
        {
            Ellipse ellipse;
            ellipse.initFromDialog();
            array.push_back(&ellipse);
        }

        if(command == '2')
        {
            Line line;
            line.initFromDialog();
            array.push_back(&line);
        }

        if(command == '3')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                array[i] -> draw();
            }
        }

        if(command == '4')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                sumArea += array[i] -> square();
            }
            cout << "sumArea: " << sumArea << endl;
        }

        if(command == '5')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                sumPerimeter += array[i] -> perimeter();
            }
            cout << "sumPerimeter: " << sumPerimeter << endl;
        }

        if(command == '6')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                sumMassCenter += array[i] -> mass();
            }
            cout << "sumMassCenter: " << sumMassCenter << endl;
        }

        if(command == '7')
        {
            for(int i = 0; i < array.size(); ++i)
            {
                sumMemory += array[i] -> size();
            }
            cout << "Memory: " << sumMemory << endl;
        }

        if(command == '8')
        {
            for(int i = 0; i < array.size() - 1; ++i)
            {
                if(array[i + 1] -> mass() < array[i] -> mass())
                    swap(array[i + 1], array[i]);
            }
        }
    }

    return 0;
}
