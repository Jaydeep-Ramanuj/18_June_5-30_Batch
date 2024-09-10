#include <iostream>
#include <fstream>

using namespace std;

class Person
{
    string name;
    int age;
    bool isLoggedIn;

public:
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    bool isPersonLoggedIn()
    {
        return isLoggedIn;
    }

    bool isEligibleForDL()
    {
        return age > 18 ? true : false;
    }

    Person(string name_, int age_, bool isLoggedIn_)
    {
        name = name_;
        age = age_;
        isLoggedIn = isLoggedIn_;
    }
    void writeDataInFile()
    {
        string file_name = name + "_details.txt";
        ofstream out_file(file_name, ios::app);

        out_file << "Name: " << name << endl;
        out_file << "Age: " << age << endl;
        out_file << "Is logged in ?: " << isLoggedIn << endl;
        out_file << "Is Eligible for Driving Licence: " << isEligibleForDL() << endl;

        cout << name + "_details.txt created";
        out_file.close();
    }
};

int main()
{
    // Person jinesh("Jinesh", 22, true);

    // cout << jinesh.getName() << endl;
    // jinesh.writeDataInFile();

    Person rajan("Rajan", 21, false);
    cout << rajan.getName() << endl;
    rajan.writeDataInFile();
    return 0;
}