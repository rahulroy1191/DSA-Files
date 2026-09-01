#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int val){
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
        cout<<temp->val<<endl;
        temp = temp->next;
        /* code */
    }
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while (
        true
    )
    {
        cin>>x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);

    }
    print_linked_list(head);
    
    return 0;
}