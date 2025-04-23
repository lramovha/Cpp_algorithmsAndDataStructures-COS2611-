#include <iostream>
using namespace std;

//Define the structure of the node
struct Node{
    int data;   //data variable
    Node *next;     // pointer variable
};

Node *head = nullptr;   //Head to track start of list

void insertAtBeginning(int value){
    Node *newNode = new Node();     //create new node instance.
    newNode -> data = value;        //assign data with value parameter.
    newNode -> next = head;         //assign next pointer points to the current head pointer
    head = newNode;                 //head pointer now points to newNode.
    cout << value << " inserted at the biginning.\n";
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
        while (tempPtr -> next != nullptr){ // Transverse to the last node
            tempPtr = tempPtr -> next;
        }
        tempPtr -> next = newNode;  // Link the newNode to the last node(nullptr)
    }
    cout << value << "inserted at the end.\n";
}

void displayList() {
    if (head == nullptr) {
        cout << "This List is empty.\n";
        return;
    }
    Node *temp = head;
    cout << "LinkedList: ";
    while (temp != nullptr){
        cout << temp -> data << " -> ";
        temp = temp ->next;
    }
    cout << "NULL\n";
}

void deleteAtBeginning(){
    if (head == nullptr){
        cout << "List is already empty.\n";
        return;
    }
    Node *temp = head;
    head = head -> next; //move temporaty head to next node in line.
    cout << "Deleted " << temp -> data << " from the beginning.\n";
    delete temp;
}

int main(){
    insertAtBeginning(10);
    insertAtEnd(20);
    insertAtBeginning(5);
    insertAtEnd(30);
    displayList(); // Should display: 5 -> 10 -> 20 -> 30 -> NULL
    return 0;
}