#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int lar=arr[n-1],seclar=0;
    for(i=n-2;i>=0;i--){
        if(arr[i]!=lar){
            seclar=arr[i];
            break;
        }
    }
    cout<<"second largest element is :"<<seclar;
    return 0;
}
