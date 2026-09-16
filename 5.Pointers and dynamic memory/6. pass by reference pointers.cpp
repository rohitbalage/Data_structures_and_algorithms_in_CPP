#include <iostream>
using namespace std;

void watchVideo(int *viewsPtr)
{ // watch vide should increament view count by 1
    *viewsPtr = *viewsPtr + 1;
}

/*
 watchVideo () {

*viewPtr is poiting to views in main.

 }
and

## In main:

&views
*/

int main()
{
    int views = 100;
    watchVideo(&views);

    cout << views << endl;
    return 0;
}