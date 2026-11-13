#include <iostream>
using namespace std;

// pass by value
void applyTax(int income)
{
    float tax = 0.10;
    income = income - income * tax;

    /*
    here we are creating another variable income and we are
    copying the variable income here, so basically
    there are two copies of income and we are printing not priting this copy of income.
    */
}

// pass by reference
void applyTax2(int &money)
{
    float tax = 0.10;
    money = money - money * tax;

    /*
   passing the value by reference, even if we are using the
   different name for the "income" variable
    */
}

int main()
{
    int income;
    cin >> income;
    applyTax(income);
    applyTax2(income);
    cout << income << endl;
    return 0;
}