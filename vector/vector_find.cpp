#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    auto it = find(v.begin(),v.end(),5);
    int val = 0,index = 0;
    if(it != v.end()){
        val = *it;
    }
    for(int i=0; i<v.size(); i++){
        if(v[i] == val){
            index = i;
        }
    }
    cout<<index<<endl;
    
    return 0;
}