#include <iostream>

using namespace std;

class A
{
public:
    string name = "Some";
    int age = 23;
    string getName()
    {
        return name;
    }
    virtual int getAge();
};

class B : public A
{

    int getAge() override
    {
        return age;
    }
};

int main()
{

    return 0;
}