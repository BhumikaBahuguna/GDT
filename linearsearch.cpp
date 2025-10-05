#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>num;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<"found";
            return 0;
        }
    }
    cout<<"not found";
    return 0;
}