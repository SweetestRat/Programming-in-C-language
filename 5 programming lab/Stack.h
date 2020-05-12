#ifndef UNTITLED8_STACK_H
#define UNTITLED8_STACK_H
#include <stack>
#include <string>

using namespace std;

class MyException:
        public exception {};

class StackExceptionFull: public MyException
{
public:
    const char* what() const throw() override
    {
        return "Stack is full!";
    }
};

class StackExceptionEmpty: public MyException
{
public:
    const char* what() const throw() override
    {
        return "Stack is empty!";
    }
};

template <int N, class T>
class Stack
{
public:
    Stack() = default;
    void push(const T& value){
        if (N == myStack.size())
            throw StackExceptionFull();
        else
            myStack.push(value);
    };
    void pop()
    {
        if(myStack.empty())
            throw StackExceptionEmpty();
        else
            myStack.pop();
    };
    ~Stack() = default;
private:
    stack<T> myStack;
};

#endif //UNTITLED8_STACK_H
