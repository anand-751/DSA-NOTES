#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int sumLinkedList(Node* head){
    int sum = 0;
    Node* temp = head;

    while (temp!=NULL){
        {
            sum+=temp->data;
            temp = temp->next;       
        }
    
    }
    return sum;
}
void insert(Node** head , int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr)
    {
        *head = newNode;
    }else{
        Node* temp = *head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
}

int main(){
    Node* head = nullptr;

    insert(&head , 5);
    insert(&head , 10);
    insert(&head , 15);

    int sum = sumLinkedList(head);
    cout<<"sum of the numbers are = "<< sum <<endl;
    return 0;

}