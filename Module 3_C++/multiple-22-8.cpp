#include <iostream>

using namespace std;

class Remote
{

    // Data members

    string btnType;
    string materialType;

protected:
    string circuitType;

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

class SmartRemote
{
public:
    bool hasTouchKey;
    bool hasVoiceFeatures;

    SmartRemote(bool hasTouchKey_, bool hasVoiceFeatures_)
    {
        hasTouchKey = hasTouchKey_;
        hasVoiceFeatures = hasVoiceFeatures_;
    }

    void doSuperThings()
    {
        cout << "Doing some super cool things";
    }

    void on(string applianceName)
    {
        cout << applianceName + " is now ON using super Remote" << endl;
    }
};

class TVRemote : public Remote, public SmartRemote
{
    bool hasMuteBtn;
    int numberOfChannels;

public:
    TVRemote(string brandName_, int price_, int range_, int numberOfCells_, string circuitType_, string btnType_, string materialType_, string owner_, bool hasMuteBtn_, int numberOfChannels_, bool hasTouchKey_, bool hasVoiceFeatures_) : Remote(brandName_, price_, range_, numberOfCells_, circuitType_, btnType_, materialType_, owner_), SmartRemote(hasTouchKey_, hasVoiceFeatures_)
    {
        hasMuteBtn = hasMuteBtn_;
        numberOfChannels = numberOfChannels_;
    }

    int getChannelCount()
    {
        return numberOfChannels;
    }

    bool hasMic()
    {
        cout << circuitType;
        // SmartRemote::on("tv");
        return hasVoiceFeatures;
    }
};

int main()
{

    TVRemote tv("sony", 350, 30, 2, "XCSR", "normal", "silicon", "rajan", true, 54, true, true);

    cout << "Channel count: " << tv.getChannelCount() << endl;
    cout << "Brnad name: " << tv.getBrandName() << endl;
    cout << "Has Mic: " << tv.hasMic() << endl;

    tv.Remote::on("Tv");
    tv.SmartRemote::on("Tv");

    return 0;
}