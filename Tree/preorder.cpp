#include <bits/stdc++.h>
using namespace std;
class bn{
    public:
    int val;
    bn* left;
    bn* right;
    bn(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(bn* root){
    if(root == NULL){
        return;
    }
     cout<<root->val<<" ";
    preorder(root->left);
   
    preorder(root->right);
}
int main(){
    bn* root = new bn(10);
    bn* a = new bn(20);
    bn* b = new bn(30);
    bn* c = new bn(40);
    bn* d = new bn(50);
    bn* e = new bn(60);
    root->left = a;
    root->right = b;
    a->left  =c;
    a->right = d;
    b->left = e;
    preorder(root);


    return 0;
}