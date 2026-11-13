#include <iostream>
using namespace std;

int main()
{
    char sentence[1000];
    char temp = cin.get();

    int len = 0;

    while (temp != '#') // we can use any character   '#' '$' or anything
    {
        sentence[len++] = temp;

        // update the value of the temp
        temp = cin.get();
    }
    sentence[len] = '\0';

    cout << " Length " << len << endl;
    cout << sentence << endl;
}