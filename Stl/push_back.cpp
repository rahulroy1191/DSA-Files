#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10,20,30};
    l.push_back(100);
    // for(int all_elemente  : l){
    //     cout<<all_elemente<<endl;
    // }
    // return 0;
    cout<<"the last number is : "<<endl;
    cout<<*next(l.begin(), 3)<<endl;
}