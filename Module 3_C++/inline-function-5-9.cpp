#include <iostream>

using namespace std;

class demo
{
public:
    string name = "something";
    int counter = 0;

    inline int incrementCounter()
    {
        return counter++;
    }
};

int main()
{
    demo d;
    d.incrementCounter();
    d.incrementCounter();
    d.incrementCounter();
    d.incrementCounter();

    // d.counter++;
    // d.counter++;
    // d.counter++;
    // d.counter++;
    return 0;
}