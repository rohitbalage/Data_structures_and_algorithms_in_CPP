/*
Finding subsets:

Given a string, find all the subsets of the given string

input:
abc

2*2*2 = 8 options

output:

"",a,b,c,ab,ac,bc,abc

*/

#include <iostream>
#include <vector>
using namespace std;

void findSubsets(char *input, char *output, int i, int j) {
    // base case
    if (input[i] == '\0') {
        output[j] = '\0';
        if (output[0] == '\0') {
            cout << "NULL";
        }
        cout << output << endl;
        return;
    }

    // rec case
    // Include the ith letter
    output[j] = input[i];
    findSubsets(input, output, i + 1, j + 1);

    // Exclude the ith letter
    findSubsets(input, output, i + 1, j);
}

int main() {
    char input[100];
    char output[100];

    cin >> input;
    findSubsets(input, output, 0, 0);

    return 0;
}