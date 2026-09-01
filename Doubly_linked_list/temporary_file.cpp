#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;

    }
};
void insert_dLL(Node* &head, int val){
    Node* newnode = new Node(val);
    head->prev = newnode;
    newnode->next = head;
    head = newnode;

}
void insert_at_tail(Node*&head,Node*&tail, int val){
    Node* newnnode = new Node(val);
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        /* code */
    }
    temp->next = newnnode;
    newnnode->prev = temp->next;
    tail = newnnode;
    
    cout<<endl;
    cout<<"Now The main value of tail : ";
    cout<<newnnode->val<<endl;
    
    
}
void print_linked_list(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
        /* code */
    }
    
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    insert_dLL(head, 5);
    print_linked_list(head);
    insert_at_tail(head, tail, 40);

}