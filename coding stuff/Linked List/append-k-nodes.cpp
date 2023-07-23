#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

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

int length(Node *head){
    int l = 0;
    Node* temp = head;
    while (temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

Node* kappend(Node *head, int k){
    Node* newHead;
    Node* newTail;
    Node* tail = head;

    int l=length(head);
    k=k%l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l-k)
        {
            newTail = tail;
        }
        if (count == l-k+1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

void printLinkedList(Node* head){
    Node* ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
   
}

int main(){
    Node* head = nullptr;
    
    //inserting values to the list
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);

    printLinkedList(head);    
    cout<<endl;
    Node* newHead = kappend(head,3);
    printLinkedList(head);

    return 0;
}
