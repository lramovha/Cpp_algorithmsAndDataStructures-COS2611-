#include <iostream>
using namespaces std;

//Define the structure of the node
struct Node{
    int data;   //data variable
    Node *next;     // pointer variable
}

Node *head = nullptr;   //Head to track start of list

void insertAtStart(int value){
    Node *newNode = new Node();     //create new node instance.
    newNode -> data = value;        //assign data with value input.
    newNode -> next = head;         //assign next pointer points to the current head pointer
    head = newNode;                 //head pointer now points to newNode.
    cout << value << "inserted at the biginning.\n";
}

void insertAtEnd(int value){
    Node *newNode = new Node();     //create newNode instance.
    newNode -> data = value;        //assign value to data.
    newNode -> next = nullptr;      //last node points to null.

    if (head == nullptr){
        head = newNode;
    }
    else{
        Node *tempPtr = head;
        while (newNode -> next != nullptr){

        }
    }
}