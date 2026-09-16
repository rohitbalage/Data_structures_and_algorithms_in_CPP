#include <iostream>
using namespace std;

// passing no. of rows in optional but column is must
// address by array.
void print(int arr[][100], int n, int m)
{
    // print

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    // constrain
    int arr[100][100];

    // n  rows and m colums
    int n, m;
    cin >> n >> m;

    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print thr array
    print(arr, n, m);
    return 0;
}