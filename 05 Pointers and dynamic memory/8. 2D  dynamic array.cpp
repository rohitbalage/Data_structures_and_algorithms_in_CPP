#include <iostream>
using namespace std;

/*
first we created a bucket that stores  array of pointers.

-----------             this is how we store the values
|arr[i]    | -------->  | 1| 2 | 3 | 4 | 5 |6 |
|          |
|          |
-----------


*/
int **create2DArray(int rows, int cols)
{
    // allocation memory for each row
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    // init the array with increasing list of nos

    int value = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}

int main()
{
    // 2D Dynamic Array
    int rows, cols;

    cin >> rows >> cols;

    int **arr = create2DArray(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    /*
    if it was a static array you cannot access the content in the main.
    but it is a dynamic array, that means the memory is outside of the call stack
    it called another method, which created a method arr[]
    which pointed to a 2D array in heap memory.

    now even if the function call create2Darray is over, the arr[] is gone.
    but it has written the back to the main so main can now access the heap.
    and thus we are able to print to the main.
    */
    return 0;
}