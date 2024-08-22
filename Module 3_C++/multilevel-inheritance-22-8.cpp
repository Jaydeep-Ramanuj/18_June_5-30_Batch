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

class sonyTVRemote : public TVRemote
{
    string modelNumber;
    bool hasNetflixButton;

public:
    sonyTVRemote(string brandName_, int price_, int range_, int numberOfCells_, string circuitType_, string btnType_, string materialType_, string owner_, bool hasMuteBtn_, int numberOfChannels_, string modelNumber_, bool hasNetflixButton_) : TVRemote(brandName_, price_, range_, numberOfCells_, circuitType_, btnType_, materialType_, owner_, hasMuteBtn_, numberOfChannels_)
    {
        modelNumber = modelNumber_;
        hasNetflixButton = hasNetflixButton_;
    }

    string getModelNumber()
    {
        return modelNumber;
    }
    bool hasNetflixButton_()
    {
        return hasNetflixButton;
    }
};

int main()
{
    sonyTVRemote bravia("sony", 350, 30, 2, "XCSR", "normal", "silicon", "rajan", true, 54, "Super 4K", true);
    cout << "Model number: " << bravia.getModelNumber() << endl;
    cout << "Number of channels: " << bravia.getChannelCount() << endl;
    cout << "Brand name: " << bravia.getBrandName() << endl;

    return 0;
}