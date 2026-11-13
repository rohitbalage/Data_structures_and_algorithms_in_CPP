#include <iostream>
using namespace std;

/*
Static Memory:
when function called, the memory is allocated by compiler
and when it is done, the memory is destroyed by the compiler

Dynamic Memory:
memory allocated during runtime.
this goes inside a memory, called Heap memory.

int * arr = new int[n];

arr[i] = value;
----
----some lines of code---------------
----

delete [] arr;
the compiler never destroys the memory, until the programmer deletes
delete []arr


int * x = new int
 *x = 10;


 here in stacck                   here in heap
 * x = 10;                         value stored =10

 after delete all heap memory destroyed.

 if you don't used the 'delete' and forget.  a condition arries
 callled "Memory Leak" that means we have wasted some part of the memory.

it means  x when creates a new int. now the heap memory allocates some value to x
but now you forget to delete it, so now the memory allocated to heap is now just wasted.

*/

int main()

{

    int n;
    cin >> n;

    // Dynamic array:

    int *arr = new int[n]; // this is the static allocation for heap memory in main function

    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
        cout << arr << endl; // priting the address of pointer pointing.
        cout << arr[i] << " ";
    }

    // Delete this array:

    delete[] arr;

    cout << arr << endl;

    /*the address will be same as main as, the heap memory delete
    but the pointer poting to that is not */
    return 0;
}