#include <iostream>
#include <vector>
#include "Algorithm.h"

template<typename T>
bool NotMatching (T value)
{
    return (value > 0 && value < 9);
}

template<typename T>
bool Sorting (T value1, T value2)
{
    return (value1 <= value2);
}

class CPoints
{
public:
    CPoints(int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }

    int x;
    int y;

    friend bool operator<(const CPoints &p, int num)
    {
        return (p.x < num && p.y < num);
    }

    friend bool operator>(const CPoints &p, int num)
    {
        return (p.x > num && p.y > num);
    }

    friend bool operator<=(const CPoints &p1, const CPoints &p2)
    {
        return (p1.x <= p2.x && p1.x <= p2.y && p1.y <= p2.x && p1.y <= p2.y);
    }

    friend bool operator==(const CPoints &p, const int num)
    {
        return(p.x == num || p.y == num);
    }

};

int main()
{
    std::vector<int> vec = {10, 13, 16, 10};
    std::cout << ((none_of(vec.begin(), vec.end(), NotMatching<int>)) ? "All numbers are not in range 0-9" : "Some(all) number(-s) is(are) in range 0-9") << std::endl;
    std::cout << ((is_sorted(vec.begin(), vec.end(), Sorting<int>)) ? "Sorted" : "Not sorted") << std::endl;
    std::cout << ((find_backward(vec.rbegin(), vec.rend(), 13)) ? "Number 13 found" : "Number 13 is not found") << std::endl;

    std::cout << std::endl;

    std::vector<CPoints> Point = {{1, 2}, {3, 4}, {5, 6}};
    std::cout << ((none_of(Point.begin(), Point.end(), NotMatching<CPoints>)) ? "All points are not in range 0-9" : "Some(all) point(-s) is(are) in range 0-9") << std::endl;
    std::cout << ((is_sorted(Point.begin(), Point.end(), Sorting<CPoints>)) ? "Sorted" : "Not sorted") << std::endl;
    std::cout << ((find_backward(Point.rbegin(), Point.rend(), 3)) ? "Number 3 found" : "Number 3 is not found") << std::endl;

    return 0;
}
