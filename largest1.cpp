#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[30],n,i,largest=0;
    cout<<"enter no of elements: ";
    cin>>n;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"larget element is :"<<largest;
    return 0;
}