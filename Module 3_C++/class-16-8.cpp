#include <iostream>

using namespace std;

// class, it is collection of data members and methods. It is also called as blue print for our object.

class Remote
{

    // Data members

    string brandName;
    int price;
    int range;
    int numberOfCells;
    string circuitType;
    string btnType;
    string materialType;
    string owner;

public:
    // constructor, it is special method (without any return type) which is useful to initialize class members. It is same as class name.

    // Default constructor, it is called by default when we make any object. If we don't make default constructor by our own, compiler will do it and call it.

    // Remote()
    // {
    //     brandName = "Sony";
    //     price = 300;
    //     range = 30;
    //     numberOfCells = 2;
    //     circuitType = "XFDW62";
    //     btnType = "normal";
    //     materialType = "silicon";
    // }

    // Parameterized constructor, it is called by passing necessary value while creating an object.
    Remote(string brandName_, int price_, int range_, int numberOfCells_, string circuitType_, string btnType_, string materialType_, string owner_)
    {
        brandName = brandName_;
        price = price_;
        range = range_;
        numberOfCells = numberOfCells_;
        circuitType = circuitType_;
        btnType = btnType_;
        materialType = materialType_;
        owner = owner_;
    }

    // Destructor, it is used to free up resources being used by object. It is called when object goes out of scope or get destroyed.
    ~Remote()
    {
        // logic to free up resources
        // ex. fclose(file_object);
    }

    // methods
    void on(string applianceName)
    {
        cout << applianceName + " is now ON using " + brandName << " Remote" << endl;
    }
    void off(string applianceName)
    {
        cout << applianceName + " is now OFF using " + brandName << " Remote" << endl;
    }

    string getBrandName(string yourName)
    {
        if (yourName == owner)
        {
            return brandName;
        }
        else
        {
            cout << "Bhai chhod de voh tera remote nahi hai";
        }
    }
};

int main()
{

    // object, it is instance of class, which will acts as medium to access all of its data member and methods.

    // creating an object, default constructor will be called
    // Remote sony

    // creating an object, parameterized constructor will be called

    Remote sony("sony", 350, 30, 2, "XCSR", "normal", "silicon", "rajan");
    Remote lg("lg", 400, 35, 2, "XSET", "normal", "silicon", "prem");
    // sony.on("TV");

    cout << sony.getBrandName("rajan") << endl;
    cout << lg.getBrandName("vijay") << endl;

    sony.on("TV");
    lg.off("Speaker");

    return 0;
}