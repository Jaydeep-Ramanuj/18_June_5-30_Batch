#include <iostream>

using namespace std;

class student
{

    // static member, it is used when we want share some class member across multiple objects. All object can access such data members with their latest values.
    static int id;
    string clgName = "Atmiya";
    int roll;
    string name;

public:
    student(string name_)
    {
        roll = getLatestId();
        name = name_;
    }

    int getRollNumber()
    {
        return roll;
    }

    // static function, it is used when we want manipulate static members. Remember static functions can only access static members.

    static int getLatestId()
    {
        return ++id;
    }
};

int student::id = 0;

int main()
{
    student s1("a");
    student s2("b");
    student s3("c");
    cout << "a Roll number:  " << s1.getRollNumber() << endl;
    cout << "b Roll number:  " << s2.getRollNumber() << endl;
    cout << "c Roll number:  " << s3.getRollNumber() << endl;
    return 0;
}