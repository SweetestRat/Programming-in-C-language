#ifndef UNTITLED4_ALGORITHM_H
#define UNTITLED4_ALGORITHM_H

template <typename Range, typename Object>
bool none_of(const Range begin, const Range end, bool &func(Object))
{
    for(auto it = begin; it != end; ++it)
    {
        if(func(*it))
            return false;
    }
    return true;
}

template <typename Range, typename Object>
bool is_sorted(const Range begin, const Range end, bool &func(Object, Object))
{
    for(auto it = begin; it != end; ++it)
    {
        if(!func(*it, *(it + 1)))
            return false;
    }
    return true;
}

template <typename Range, typename Object>
bool find_backward(const Range rbegin, const Range rend, const Object num)
{
    for(auto it = rbegin; it != rend; ++it)
    {
        if(*it == num)
            return true;
    }
    return false;
}

#endif //UNTITLED4_ALGORITHM_H
