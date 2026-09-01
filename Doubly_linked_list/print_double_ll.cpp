#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->next = NULL;
        this->prev = NULL;
        this->val = val;
    }
};
void print_linked_list(Node*&head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
        /* code */
    }
    
}
void print_reverse_ll(Node* tail){
    Node* temp = tail;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
        /* code */
    }
    
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->next = tail;
    a->prev = a;
    tail->prev = a;
    print_linked_list(head);


    return 0;
}