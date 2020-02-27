#include "tasks.h"
#include <algorithm>

// pointer first task (3)

void FirstTaskPointer(int *value1pointer, int *value2pointer)
{
    if(*value1pointer > *value2pointer)
    {
        *value1pointer = *value1pointer % *value2pointer;
    }
    else if(value2pointer > value1pointer)
        *value2pointer = *value2pointer % *value1pointer;
}

// link first task (3)

void FirstTaskLink(int &value1link, int &value2link)
{
    if(value1link > value2link)
        value1link = value1link % value2link;
    else if(value2link > value1link)
        value2link = value2link % value1link;
}

// pointer second task (8)

void SecondTaskPointer(float *value8pointer)
{
    *value8pointer = 1 / *value8pointer;
}

// link second task (8)

void SecondTaskLink(float &value8link)
{
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

void FourthTaskPointer(int *a, int *b, int *m, int *matrix, int *temp)
{
    for(int i = 0; i < *m; ++i)
    {
        *(temp + i) = *(matrix + (i + *m * (*a - 1)));
        *(matrix + (i + *m * (*a - 1))) = *(matrix + (i + *m * (*b - 1)));
        *(matrix + (i + *m * (*b - 1))) = *(temp + i);
    }
}

// link fourth task (16)

void FourthTaskLink(int &a, int &b, int &m, int &matrix, int &temp)
{
    for(int i = 0; i < *m; ++i)
    {
        temp + i = *(matrix + (i + *m * (*a - 1)));
        *(matrix + (i + *m * (*a - 1))) = *(matrix + (i + *m * (*b - 1)));
        *(matrix + (i + *m * (*b - 1))) = *(temp + i);
    }
}