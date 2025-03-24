#include <iostream>
using namespaces std;

struct Node{
    int data;
    Node *next;
}

Node *head = nullptr;

void insertAtStart(int value){
    Node *newNode = new Node();
    newNode -> data = value;
    newNode -> *next = head;
    head = newNode;
    cout << value << "inserted at the biginning.\n";
}