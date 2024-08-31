#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        name = "Sanjay";
        age = 23;
    }
    Person(string name_)
    {
        name = name_;
        age = 22;
    }
    Person(string name_, int age_)
    {
        name = name_;
        age = age_;
    }

    bool isPersonEligibleForDL()
    {
        return (age > 18) ? true : false;
    }
    // function overloading, same function name but with different number of paramater which gives different behaviour
    void overload()
    {
        cout << "Overload 1" << endl;
    }
    void overload(int a)
    {
        cout << "Overload 2" << endl;
    }
    void overload(int a, int b)
    {
        cout << "Overload 3" << endl;
    }
};

class Indian : public Person
{

public:
    string stateName;
    bool isIndian;
    bool isEligibleToDriveCar;

    Indian(string stateName_, bool isEligibleToDriveCar_, bool isIndian_) : Person()
    {
        stateName = stateName_;
        isEligibleToDriveCar = isEligibleToDriveCar_;
        isIndian = isIndian_;
    }
    Indian(string name_, string stateName_, bool isEligibleToDriveCar_, bool isIndian_) : Person(name_)
    {
        stateName = stateName_;
        isEligibleToDriveCar = isEligibleToDriveCar_;
        isIndian = isIndian_;
    }
    Indian(string name_, int age_, string stateName_, bool isEligibleToDriveCar_, bool isIndian_) : Person(name_, age_)
    {
        stateName = stateName_;
        isEligibleToDriveCar = isEligibleToDriveCar_;
        isIndian = isIndian_;
    }

    // bool isEligibleToDriveCarOnIndianRoad()
    // {
    //     return isPersonEligibleForDL() && isIndian;
    // }

    // overriding, when same name function is present in both base and derived class, then derived class function will override base class function

    bool isPersonEligibleForDL()
    {
        (age > 18) ? cout << "Yes he is eligible" : cout << "No he is not eligible";
        return 0;
    }
};

int main()
{
    // Person p1, p2("Ajay"), p3("Vijay", 5);
    // cout << "P1 name: " << p1.name << endl;
    // cout << "P1 is Eligible for DL ?: " << p1.isPersonEligibleForDL() << endl;
    // cout << "P2 name: " << p2.name << endl;
    // cout << "P2 is Eligible for DL ?: " << p2.isPersonEligibleForDL() << endl;
    // cout << "P3 name: " << p3.name << endl;
    // cout << "P3 is Eligible for DL ?: " << p3.isPersonEligibleForDL() << endl;

    // p1.overload();
    // p1.overload(1);
    // p1.overload(1, 2);

    // operator overloading, same operator but different behaviour
    // string str = "New";
    // cout << str + "York";

    // cout << 10 + 20;

    Indian i1("Vijay", 25, "guj", true, true);

    cout << i1.isPersonEligibleForDL();
    cout << i1.Person::isPersonEligibleForDL();
    return 0;
}