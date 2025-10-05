#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotateleftbyd(vector<int>arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
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
    return 0;
}


