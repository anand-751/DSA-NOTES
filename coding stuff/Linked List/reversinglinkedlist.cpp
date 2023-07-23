#include <iostream>
using namespace std;
// Node structure
class Node {
    public:
    int data;
    Node* next;
};

Node* insertAtEnd(Node* head, int value) {
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
    
    return head;    
}

Node* reverseList(Node* head){
    Node* prevptr = NULL;
    Node* currentptr = head;
    Node* nextptr;

    while (currentptr!=nullptr)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;

    }
    delete(nextptr);                    // deallocating the memory.
    return prevptr;                     // It is new loop after the loops ends.
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    
}

int main() {
    // Initialize an empty list
    Node* head = nullptr;

    // Insert some elements into the list
    head = insertAtEnd(head, 6);
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 1);

    // Display the list
    cout<<"Initial List : "<<endl;
    displayList(head);
    cout << "-nullptr-"<<endl;

    //reversing the list
    cout<<"After reversing the list : "<<endl;
    cout << "-nullptr-";
    head = reverseList(head);
    displayList(head);
    

    return 0;

}