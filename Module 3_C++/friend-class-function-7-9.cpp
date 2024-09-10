#include <iostream>

using namespace std;

class A
{
    string name = "jay";
    int age = 12;
    bool isLoggedIn = true;

    friend class B;
    friend bool isEligibleForDL();
};

bool isEligibleForDL()
{
    A a;
    return a.age > 18 ? true : false;
}

class B
{
public:
    int getAge(A &a)
    {
        return a.age;
    }
};

int main()
{

    B b;
    A a;
    cout << b.getAge(a);
    cout << isEligibleForDL();
    return 0;
}