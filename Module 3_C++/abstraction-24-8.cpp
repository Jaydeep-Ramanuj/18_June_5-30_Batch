#include <iostream>

using namespace std;

class Insta
{

private:
    string profileLink = "https://www.instagram.com/";

    string instaId;
    int numberOfFollowers;
    bool isVerified;

    string generateProfileLink()
    {
        return profileLink + instaId;
    }

public:
    Insta(string instaId_, int numberOfFollowers_, bool isVerified_)
    {
        instaId = instaId_;
        numberOfFollowers = numberOfFollowers_;
        isVerified = isVerified_;
    }

    string getInstaId()
    {
        return instaId;
    }

    string getInstaProfileLink()
    {
        return generateProfileLink();
    }
};

int main()
{
    Insta virat("virat.kohli", 270000, true);
    cout << "Insta id: " << virat.getInstaId() << endl;
    cout << "Insta Profile link: " << virat.getInstaProfileLink() << endl;

    return 0;
}