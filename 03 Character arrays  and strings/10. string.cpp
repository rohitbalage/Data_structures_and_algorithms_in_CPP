#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // char s[1000] = {'1' , 'a', 'b', 'c', '\0'};
    // string s; //= "hello world"; // Dynamic array
    // int n = 5;
    // getline(cin, s, '.'); // stop taking input at .
    // cout << s << endl;

    // for (char ch : s)
    // {
    //     cout << ch << ",";
    // }

    int n = 5; // taking 5 input strings
    vector<string> sarr;
    string temp;
    while (n--)
    {
        getline(cin, temp);
        sarr.push_back(temp);
    }

    for (string x : sarr)
    {
        cout << x << "," << endl;
    }
    // vector <string> ............

    return 0;
}