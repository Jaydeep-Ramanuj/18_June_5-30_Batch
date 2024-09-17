#include <iostream>

using namespace std;

// template <typename T>
// class student
// {
//     string name;
//     T id;
//     T rollNumber
// };

struct Person
{
    string name;
    int age;
    bool isLoggedIn;
};

struct Employee
{
    string name;
    int age;
    bool isLoggedIn;
    bool isPresent;
};

class Worker
{
public:
    string name;
    int age;
    bool isLoggedIn;
    int salary;

    Worker(string name_, int age_, bool isLoggedIn_, int salary_)
    {
        name = name_;
        age = age_;
        isLoggedIn = isLoggedIn_;
        salary = salary_;
    }
};

template <typename T>

T displayDetails(T data)
{
    cout << data.name << endl;
    cout << data.age << endl;
    cout << data.isLoggedIn << endl;
}

int main()
{
    struct Person p;
    p.name = "Some";
    p.age = 21;
    p.isLoggedIn = true;

    struct Employee e;
    e.name = "Else";
    e.age = 22;
    e.isLoggedIn = false;
    e.isPresent = true;

    Worker w("thing", 32, true, 20000);
    // displayDetails(p);
    // displayDetails(e);
    displayDetails(w);
    return 0;
}
