#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next =   NULL;
    }
};
void insert_at_any_pos(Node* &head, int indx, int val){
    Node* newnode = new Node(val);
    Node* tem = head;
    for(int i=1; i<indx; i++){
        tem = tem->next;
    }
    newnode->next = tem->next;
    tem->next = newnode;
}
void print_linked_list(Node* head){
    Node* tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<endl;
        tem = tem->next;
    }
    
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next= a;
    a->next = b;
    insert_at_any_pos(head, 2, 100);
    print_linked_list(head);

    return 0;
}