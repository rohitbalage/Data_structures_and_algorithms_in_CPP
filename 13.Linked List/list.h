#include<iostream>
using namespace std;
//Forward Declaration
class List;

class Node{
	int data;
	

public:
	Node* next;
	Node(int d):data(d),next(NULL){}

	int getData(){
		return data;
	}
	~Node(){
		if(next!=NULL){
			delete next;
		}
		cout<<"Deleting Node with Data"<<data <<endl;
	}

	friend class List;
};


class List{
	Node * head;
	Node * tail;

	int searchHelper(Node *start, int key){
		//base case
		if(start==NULL){
			return -1;
		}
		// value matches
		if(start->data==key){
			return 0;
		}
		//remaining part of the linked list
		int subIdx = searchHelper(start->next,key);
		if(subIdx==-1){
			return -1;
		}
		return subIdx + 1;

	}


public:

	List():head(NULL),tail(NULL){}

	Node* begin(){
		return head;
	}

	void push_front(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail = n;
		}
		else{
			Node * n = new Node(data);
			n->next = head;
			head = n;
		}
	}

	void push_back(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail = n;
		}
		else{
			Node * n = new Node(data);
			tail->next = n;
			tail = n;
		}
	}
	void insert(int data,int pos){
		if(pos==0){
			push_front(data);
			return;
		}
		//Otherwise
		Node* temp = head;
		for(int jump=1;jump<=pos-1;jump++){
			temp = temp->next;
		}

		Node * n = new Node(data);
		n->next = temp->next;
		temp->next = n;
	}
	//Searching in a Linked List
	int search(int key){

		Node * temp = head;
		int idx = 0;

		while(temp!=NULL){
			if(temp->data == key){
				return idx;
			}
			idx++;
			temp = temp->next;
		}	
		return -1;
	}

	int recursiveSearch(int key){
		int idx = searchHelper(head,key);
		return idx;
	}



	void pop_front(){
		Node * temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}

	//Homework 
	// pop_back
	// remove (pos) 

	// --- Pop Back ---
    void pop_back(){
        if(head == NULL) return; // Empty list

        // If there is only one node in the list
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        // Traverse to find the second last node
        Node *temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }

        // Delete the tail and update pointers
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    // --- Remove at Position ---
    void remove(int pos){
        if(head == NULL) return;

        // If removing the first element, use pop_front
        if(pos == 0){
            pop_front();
            return;
        }

        // Traverse to the node just before the one we want to delete
        Node *prev = head;
        for(int jump = 1; jump <= pos - 1; jump++){
            if(prev == NULL || prev->next == NULL) return; // Position out of bounds
            prev = prev->next;
        }

        Node *toDelete = prev->next;
        if(toDelete == NULL) return; // Position out of bounds

        prev->next = toDelete->next;

        // If we are removing the tail node, update the tail pointer
        if(toDelete == tail){
            tail = prev;
        }

        toDelete->next = NULL; // Prevent recursive destructor cascade
        delete toDelete;
    }

	~List(){
		if(head!=NULL){
			delete head;
			head = NULL;
		}
	}

};











