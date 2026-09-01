#include <bits/stdc++.h>
using namespace std;
struct Node{
    
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void Insert_at_tail(Node* &head, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    
}
void print_linked_list(Node* head){
    Node* tem = head;
    while (tem != NULL)
    { 
        cout<<tem->val<<endl;
        tem = tem->next;
        /* code */
    }
    
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    Insert_at_tail(head, 40);
    print_linked_list(head);

    return 0;
}