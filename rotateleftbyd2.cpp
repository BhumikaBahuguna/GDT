#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotateleftbyd(vector<int>&arr,int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n,d;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>d;
    d=d%n;
    rotateleftbyd(arr,n,d);
    cout<<"array after rotation :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}




