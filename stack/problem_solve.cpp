#include <bits/stdc++.h>
using namespace std;
class Mystack{
    public:
    vector<int> v;
   
    void push(int val){
        v.push_back(val);
      
    }
    void pop(){
        v.pop_back();
       
    }
    bool empty(){
        return v.empty();
        
    }
    int size(){
        return v.size();
        
    }
    int top(){
        return v.back();
        
    }
};
int main(){
    Mystack st1,st2;
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st1.push(x);
        
    }
    cin>>m;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        st2.push(a);
    }
    if(st1.v == st2.v){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}