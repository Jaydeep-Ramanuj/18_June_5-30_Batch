#include <iostream>

using namespace std;

class Remote
{

    // Data members

    string circuitType;
    string btnType;
    string materialType;

public:
    int numberOfCells;
    string brandName;
    int price;
    int range;
    string owner;

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

    // methods
    void on(string applianceName)
    {
        cout << applianceName + " is now ON using " + brandName << " Remote" << endl;
    }
    void off(string applianceName)
    {
        cout << applianceName + " is now OFF using " + brandName << " Remote" << endl;
    }

    string getBrandName()
    {
        return brandName;
    }
};
// inheritance, when we want to use data members and functions which are already present in some another class then we can use it by simply inheriting it.

// single inheritance, base class inherits in derived class

class TVRemote : public Remote
{
    bool hasMuteBtn;
    int numberOfChannels;

public:
    TVRemote(string brandName_, int price_, int range_, int numberOfCells_, string circuitType_, string btnType_, string materialType_, string owner_, bool hasMuteBtn_, int numberOfChannels_) : Remote(brandName_, price_, range_, numberOfCells_, circuitType_, btnType_, materialType_, owner_)
    {
        hasMuteBtn = hasMuteBtn_;
        numberOfChannels = numberOfChannels_;
    }

    int getChannelCount()
    {
        return numberOfChannels;
    }
};

int main()
{

    TVRemote tv("sony", 350, 30, 2, "XCSR", "normal", "silicon", "rajan", true, 54);
    tv.off("tv");
    cout << tv.getChannelCount();
    cout << tv.owner;
    cout << tv.getBrandName();

    return 0;
}