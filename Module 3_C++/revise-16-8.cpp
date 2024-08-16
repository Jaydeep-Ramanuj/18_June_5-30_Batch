#include <iostream>

using namespace std;

struct person
{
    string name;
    string id;
    int age;
    bool isAuthenticated;
};

int summation();

int main()
{

    // variables and data types

    int num = 10;
    float num2 = 20.30;
    char ch = 'a';
    double num3 = 3513211;
    char name[10] = "jay";

    string str = "Hello";
    bool isSupported = true;

    // operators

    // equality
    // =

    // arithmetic
    // +
    // -
    // *
    // /
    // %

    // relational / conditional
    // <
    // >
    // <=
    // >=
    // !=
    // ==

    // logical
    // &&
    // ||
    // !

    // shorthand
    // +=
    // -=
    // *=
    // /=
    // %=

    // increment / decrement
    // ++
    // --

    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        sum += i;
    }
    cout << "Sum of 1 to 100 is :" << sum;

    string day = "sunday";
    bool isFestival = true;

    if (day == "sunday")
    {
        cout << "Holiday";
    }
    else if (isFestival == true)
    {
        cout << "Holiday";
    }
    else
    {
        cout << "Regular Lecture";
    }

    if (day == "sunday" || isFestival)
        cout << "Holiday";
    else
        cout << "Regular Lecture";

    // (day == "sunday" || isFestival) ? cout << "Holiday" : cout << "Regular Lecture";

    summation();

    struct person p;
    p.name = "jay";
    p.id = "jay_32w32";
    p.age = 32;
    p.isAuthenticated = false;

    cout << "Name: " << p.name << endl;
    cout << "Id: " << p.id << endl;
    cout << "Age: " << p.age << endl;
    cout << "isAuthenticated: " << p.isAuthenticated << endl;
    return 0;
}
int summation()
{
    cout << "Inside sum func()";
    return 2;
}