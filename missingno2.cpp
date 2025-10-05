#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,missing=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    int sum=n*(n+1)/2;
    missing=sum-s;
    cout<<"missing no is :"<<missing;
    return 0;
}