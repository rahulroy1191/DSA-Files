#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pair<string,int> students = {"Rahim",30};
    cout<<students.first<<" "<<students.second<<" ";
    students.first = "Rahul";
    auto[name, roll] = students;
    cout<<endl<<name;
    return 0;
}