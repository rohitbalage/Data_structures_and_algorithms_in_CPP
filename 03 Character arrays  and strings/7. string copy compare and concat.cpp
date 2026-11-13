#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];

    // Cal the lenth
    cout << strlen(a) << endl;

    // Copy the string
    strcpy(b, a);
    cout << b << endl;

    // compare two strings  if both are equal returns 0 or else 1
    cout << strcmp(a, b) << endl;

    char web[] = "www.";
    char domain[] = "codnigminutes.com";
    // cout << strcat(web, domain) << endl;

    strcpy(b, strcat(web, domain));
    cout << b;

    return 0;
}