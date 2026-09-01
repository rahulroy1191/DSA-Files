#include <bits/stdc++.h>
using namespace std;
class binary_node{
    public:
    int val;
    binary_node* left;
    binary_node* right;
    binary_node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int main(){
    binary_node* root = new binary_node(10);
    binary_node* a = new binary_node(20);
    binary_node* b = new binary_node(30);
    binary_node* c = new binary_node(40);
    binary_node* d = new binary_node(50);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;

    
    return 0;
}