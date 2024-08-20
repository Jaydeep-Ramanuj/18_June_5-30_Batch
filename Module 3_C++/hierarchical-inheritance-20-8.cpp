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

// Hierarchical inheritance, it is used when we want to inherit a single class in multiple classes

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

class ACRemote : public Remote
{
    bool hasTemperatureScreen;
    string acTechnologyType;

public:
    ACRemote(string brandName_, int price_, int range_, int numberOfCells_, string circuitType_, string btnType_, string materialType_, string owner_, bool hasTemperatureScreen_, string acTechnologyType_) : Remote(brandName_, price_, range_, numberOfCells_, circuitType_, btnType_, materialType_, owner_)
    {
        hasTemperatureScreen = hasTemperatureScreen_;
        acTechnologyType = acTechnologyType_;
    }

    string getTechnologyType()
    {
        return acTechnologyType;
    }
};

int main()
{

    ACRemote ac("sony", 350, 30, 2, "XCSR", "normal", "silicon", "Prince", true, "sony-technology");

    cout << ac.getTechnologyType() << endl;
    cout << ac.getBrandName() << endl;

    return 0;
}