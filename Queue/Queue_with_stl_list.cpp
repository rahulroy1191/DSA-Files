#include <bits/stdc++.h>
using namespace std;
class Myqueue{
    public:
    list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int size(){
        return l.size();
    }
    int empty(){
        return l.empty();
    }
    int front(){
        return l.front();
    }
    int back(){
        return l.back();
    }
};
int main(){
    Myqueue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    
    return 0;
}