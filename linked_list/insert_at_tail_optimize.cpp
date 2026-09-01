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
void insert_at_tail_op(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
    
}
void print_linked_list(Node*head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
        /* code */
    }
    
}
void insert_at_any_pos(Node* head, int ind, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=1; i<ind; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->next = tail;
    insert_at_tail_op(head,tail, 40);
    insert_at_any_pos(head, 2, 100);
    cout<<"Now tail is :"<<tail->val<<endl;
    print_linked_list(head);
    
    // print_linked_list(head);
    return 0;
}