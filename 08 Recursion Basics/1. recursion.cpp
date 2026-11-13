/*
 Recursion:

 Recursion in computer science is a technique where the solution to a problem 
 depends on solutions to smaller instances of same problem. 
Eg. Factorial

another example: "Go to Home"

Base case:
1. if you are at home, stop moving

Recursive case:
2. take one step towards home.
3. "Go To Home".

Recursion = Principle of Mathematical Induction 

1. Figure of the smallest case
2. Always Assume the subproblem can be solved
3. solve the current problem assuming subproblem solution exists

*/
#include <iostream>
using namespace std;

// Function declaration
void goHome(int x, int Home);

int main()
{
    int x = 1;
    int Home = 10;
    goHome(x, Home);

    return 0;
}

// Function definition
void goHome(int x, int Home)
{
    if (x == Home)
    {
        cout << "Reached Home" << endl;
        return;
    }

    x = x + 1;
    goHome(x, Home);
}
