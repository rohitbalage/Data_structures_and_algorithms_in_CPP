/*
Given a number like 2021, convert into string like

"two zero two one"


Logic:

we get last digit by:
2021 % 10
we'll get
1 

202 % 10
we'll get
2
*/

#include <iostream>
using namespace std;
string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


void printSpell(int n)
{
    if(n ==0)
    {
        return;
    }

    int last_digit = n%10;
    printSpell(n/10);

    cout <<spell[last_digit] << " ";
}

int main()
{
int n;
cin >> n;
printSpell(n);


return 0;
}
