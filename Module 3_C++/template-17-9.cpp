#include <iostream>

using namespace std;

// int sum(int num1, int num2)
// {
//     return num1 + num2;
// }

// float sum(float num1, float num2)
// {
//     return num1 + num2;
// }

// string sum(string s1, string s2)
// {
//     return s1 + s2;
// }

template <typename T>
T sum(T num1, T num2)
{
    return num1 + num2;
}
// if (typeid(num1) == int)
// {
//     //
// }
// else if (typeid(num1) == float)
// {
//     //
// }
// else if (typeid(num1) == string)
// {
//     //
// }
// else if (typeid(num1) == boolean)
// {
//     //
// }

int main()
{
    // cout << sum(10, 20);
    // cout << sum(10, 20.5);

    string s1 = "new";
    string s2 = "york";
    // cout << sum(s1, s2);
    cout << sum(10, 20);
    return 0;
}