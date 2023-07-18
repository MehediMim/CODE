#include <iostream>
// #include "2105142_1_a_queue.h"
#include "2105142_1_ll_queue.h"
using namespace std;

template <class T>
class stack
{
    queue<T> stack;

public:
    T pop()
    {
        queue<T> temp_queue;
        while (stack.length() > 1)
        {
            temp_queue.enqueue(stack.front());
            stack.dequeue();
        }
        int __temp = stack.dequeue();
        while (temp_queue.length() != 0)
        {
            stack.enqueue(temp_queue.dequeue());
        }
        return __temp;
    }
    void push(T item)
    {
        stack.enqueue(item);

    }
    int length()
    {
        return stack.length();
    }
    T TopValue()
    {
        return stack.back();
    }
    bool isEmpty()
    {
        return stack.is_empty();

    }
    void display()
    {
        stack.display();
    }
    void clear()
    {
        stack.clear();
    }
};