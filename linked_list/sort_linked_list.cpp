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
    }
    
}
void sort_linked_list(Node* head){
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
    }
}
void reverse_linked_list(Node* head){
    Node* temp = head;
    if(temp == NULL){
        return;
    }
    reverse_linked_list(temp->next);
    cout<<temp->val<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while (cin>>x)
    {
        if(x == 0){
            break;
        }
        insert_at_tail(head,tail,x);
    }
    cout<<"sorted: "<<endl;
    sort_linked_list(head);
    cout<<"reversed: "<<endl;
    reverse_linked_list(head);

    print_linked_list(head);
    
    return 0;
}