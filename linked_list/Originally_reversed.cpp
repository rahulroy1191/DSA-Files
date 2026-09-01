#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val =val;
        this->next = NULL;
    }
};
void reverse_print(Node* head){
    Node* temp = head;
    if(head == NULL){
        return;
    }
    reverse_print(temp->next);
    cout<<temp->val<<endl;
}
void originally_reversed(Node*&head, Node*&tail, Node* temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }
    originally_reversed(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}
void insert_at_tail(Node*&head, Node*&tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
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
    Node* head = NULL;
    Node* tail = NULL;
    int t,x;
    cin>>t;
    while (t--)
    {
        cin>>x;
        insert_at_tail(head, tail, x);

        /* code */
    }
    originally_reversed(head, tail, head);
    print_linked_list(head);
    
    return 0;
}