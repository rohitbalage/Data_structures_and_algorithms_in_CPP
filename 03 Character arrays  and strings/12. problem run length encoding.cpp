#include <iostream>
using namespace std;
/*
Run length encoding for string comparision
if compressed string is bigger than original return original string
Input: aaabbccddee
output: a3b2cd2e2

// Input : abcd
// output: abcd


*/

string compressString(string str)
{
    int n = str.length();
    string output;
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        while (i < n - 1 and str[i + 1] == str[i])
        {
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if (output.length() > str.length())
    {
        return str;
    }
    return output;
}

int main()
{
    string s1 = "aaabbccddee";
    cout << compressString(s1) << endl;

    string s2 = "adbcd";
    cout << compressString(s2) << endl;

    return 0;
}