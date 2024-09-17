#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // reading data from file

    // string data;
    // ifstream inp_file("data.txt");
    // // ifstream inp_file("data2.txt");
    // getline(inp_file, data);
    // cout << data;

    // for (int i = 0; i < 10; i++)
    // {
    //     getline(inp_file, data);
    //     cout << data << endl;
    // }
    // inp_file.close();

    // writing data in file

    // ofstream out_file("data.txt");
    // out_file << "This is new text in data.txt file";

    // appending data in file

    ofstream out_file("data.txt", ios::app);
    out_file << "\nThis is latest text in data.txt file using append";

    out_file.close();
    return 0;
}