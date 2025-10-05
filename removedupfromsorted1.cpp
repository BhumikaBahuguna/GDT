#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int index=0;
    for(auto it :s){
        arr[index]=it;
        index++;
    }
    cout<<"array size after removing duplicates is :"<<s.size()<<endl;
    return 0;
}