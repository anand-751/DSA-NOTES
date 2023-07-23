#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int value) {
    // Create a new node
    Node* newNode = new Node;
    newNode->data = value;
    
    // Make the new node point to the current head
    newNode->next = head;
    
    // Update the head pointer to the new node
    head = newNode;
}

void insertAtEnd(Node*& head, int value) {

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head==nullptr){
        head = newNode;
    }else{
        Node* temp = head;
        while (temp->next != nullptr){
        temp = temp->next;    
    }
    temp->next = newNode;

    }
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    
}


int main() {
    Node* head = nullptr; // Initialize an empty linked list
    
    // Insert values at the beginning
    
    /*insertAtBeginning(head, 1);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 3);*/
    
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);


    // Display the linked list
    displayLinkedList(head);
    
    return 0;
}
