#include <iostream>
using namespace std;

//Define the structure of the node
struct Node{
    int data;   //data variable
    Node *next;     // pointer variable
};

Node *head = nullptr;   //Head pointer to track start of list

void insertAtBeginning(int value){
    Node *newNode = new Node();     //creates just a new node instance.
    newNode -> data = value;        //assign data with value parameter.
    newNode -> next = head;         //assign next pointer points to the current head pointer
    head = newNode;                 //head pointer now points to newNode.
    cout << value << " inserted at the biginning.\n";
}

void insertAtEnd(int value){
    Node *newNode = new Node();     //create newNode instance.
    newNode -> data = value;        //assign value to data.
    newNode -> next = nullptr;      //upon creation pointer points to null.

    if (head == nullptr){ // if there's no node.
        head = newNode; // head is equal to new created node.
    }
    else{
        Node *temp = head; //else creates temp pointer, pointing to head.
        while (temp -> next != nullptr){ // Transverse to the last node before null pointer.
            temp = temp -> next; //keep increamenting pointer to next for iteration.
        }
        temp -> next = newNode;  // assigns newNode to temporary pointer before null.
    }
    cout << value << " inserted at the end.\n";
}

void displayList() {
    if (head == nullptr) {  // if the list is empty viz. head equal null.
        cout << "This List is empty.\n";
        return;
    }
    Node *temp = head;  //create temporary pointer of Node type.
    cout << "LinkedList: ";
    while (temp != nullptr){    //while pointer is not null pointer viz. end of linkedlist
        cout << temp -> data << " -> "; //print temporary pointer data.
        temp = temp ->next;     //incriment tempory pointer.
    }
    cout << "NULL\n"; //print null to show end of linked list.
}

void deleteAtBeginning(){
    if (head == nullptr){   //if the linked list is empty viz. head is null pointer.
        cout << "List is already empty.\n";
        return;
    }
    Node *temp = head;      //create temporary node that poins to head viz. first node of linkedList.
    head = head -> next; //move temporary head to next node in line viz. second node.
    cout << "Deleted " << temp -> data << " from the beginning.\n";
    delete temp;
}

void deleteAtEnd() {
    if (head == nullptr){ // list has no node, head is null pointer.
        cout << "List is already empty.\n";
        return;
    }
    if (head -> next == nullptr){ // If there's only one node viz. if next node after head is null.
        cout << "Deleted " << head -> data << " from the end.\n";
        delete head; // free's head memory.
        head = nullptr; //points head back to nullptr viz. linkedList is now empty.
        return;
    }
    Node *temp = head;
    while (temp -> next -> next != nullptr) { //Transverse to second last
        temp = temp -> next;
    }
    cout << "Deleted " << temp -> next -> data << " from the end.\n";
    delete temp -> next;    // delete last node.
    temp -> next = nullptr;
}

int main(){
    insertAtBeginning(10);
    insertAtEnd(20);
    insertAtBeginning(5);
    insertAtEnd(30);

    displayList(); // Should display: 5 -> 10 -> 20 -> 30 -> NULL

    deleteAtBeginning();
    displayList(); // Should display: 10 -> 20 -> 30 -> NULL

    deleteAtEnd();
    displayList(); // Should display: 10 -> 20 -> NULL

    return 0;
}