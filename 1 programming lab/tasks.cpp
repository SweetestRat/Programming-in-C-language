#include "tasks.h"
#include <algorithm>
#include <iostream>

using namespace std;

// pointer first task (3)

void FirstTaskPointer(int *value1pointer, int *value2pointer)
{
    if(*value1pointer == *value2pointer)
        cout << "No max value" << endl;
    else if(*value1pointer > *value2pointer)
        *value1pointer = *value1pointer % *value2pointer;
    else if(value2pointer > value1pointer)
        *value2pointer = *value2pointer % *value1pointer;
}

// link first task (3)

void FirstTaskLink(int &value1link, int &value2link)
{
    if(value1link == value2link)
        cout << "No max value" << endl;
    else if(value1link > value2link)
        value1link = value1link % value2link;
    else if(value2link > value1link)
        value2link = value2link % value1link;
}

// pointer second task (8)

void SecondTaskPointer(float *value8pointer)
{
    if(*value8pointer == 0)
        *value8pointer = 0;
    else
        *value8pointer = 1 / *value8pointer;
}

// link second task (8)

void SecondTaskLink(float &value8link)
{
    if(value8link == 0)
        value8link = 0;
    else
        value8link = 1 / value8link;
}

// pointer third task (11)

void ThirdTaskPointer(int *value11pointer, int *numberpointer)
{
    *value11pointer = *value11pointer - *numberpointer;
}

// link third task (11)

void ThirdTaskLink(int &value11link, int &numberlink)
{
    value11link = value11link - numberlink;
}

// pointer fourth task (16)

void FourthTaskPointer(int *a, int *b, int *Matrix)
{
    int temp[3];

    for(int i = 0; i < 3; ++i)
    {
        temp[i] = Matrix[i + 3 * (*a - 1)];
        Matrix[i + 3 * (*a - 1)] = Matrix[i + 3 * (*b - 1)];
        Matrix[i + 3 * (*b - 1)] = temp[i];
    }
}

// link fourth task (16)

void FourthTaskLink(int &a1, int &b1, int (&MatrixL)[9])
{
    int temp[3];

    for(int i = 0; i < 3; ++i)
    {
        temp[i] = MatrixL[i + 3 * (a1 - 1)];
        MatrixL[i + 3 * (a1 - 1)] = MatrixL[i + 3 * (b1 - 1)];
        MatrixL[i + 3 * (b1 - 1)] = temp[i];
    }
}