#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

// Function to print the linked list
void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to take input terminated by -1
node* take_input() {
    int d;
    cin >> d;
    node* head = NULL;
    while (d != -1) {
        node* n = new node(d);
        n->next = head;
        head = n;
        cin >> d;
    }
    return head;
}

// Overloading the insertion operator (<<) to print the list
ostream& operator<<(ostream &os, node* head) {
    print(head);
    return os;
}

// Overloading the extraction operator (>>) to take input for the list
istream& operator>>(istream &is, node* &head) {
    head = take_input();
    return is;
}

// Iterative function to reverse a linked list
void reverse(node* &head) {
    node* C = head;
    node* P = NULL;
    node* N = NULL;

    while (C != NULL) {
        N = C->next;  // Save the next node
        C->next = P;  // Reverse the current node's pointer
        P = C;        // Advance P one step
        C = N;        // Advance C one step
    }
    head = P;         // Update head to the new front
}

int main() {
    node* head = NULL;
    node* head2 = NULL;

    cout << "Enter values for head (type -1 to stop): " << endl;
    cout << "Enter values for head2 (type -1 to stop): " << endl;
    
    // Using the overloaded >> operator
    cin >> head >> head2;

    cout << "\n--- Initial Lists ---" << endl;
    // Using the overloaded << operator
    cout << "Head:  " << head;
    cout << "Head2: " << head2;

    // Reversing head list iteratively
    reverse(head);

    cout << "\n--- After Reversing Head ---" << endl;
    cout << "Head:  " << head;

    return 0;
}