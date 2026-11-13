/*

STACK - Last in first out

QUEUE - first in first out


Push - O(1)

Pop - O(1)

Front -O(1)

Applications:

eg.
system for youtube - server is going to maintained queue of videos

each of these videos needs to go through processing system which maintains the order.

eg.
multiple request on the server which needs to be queued. 

Queue can be implemented using array or linkedlist.

insertion - rear+1 
removal - front

*/

#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    Queue myqueue(7);

    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(5);
    myqueue.push(6);
    myqueue.push(7);
    myqueue.push(8); // Ignored because queue is full (max size 7)
    myqueue.pop();
    myqueue.pop();
    myqueue.push(9);

    while (!myqueue.empty()) {
        cout << myqueue.getFront() << endl;
        myqueue.pop(); // Added pop so the loop advances and terminates
    }

    return 0;
}