#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lar=arr[0],seclar=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            seclar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>seclar){
            seclar=arr[i];
        }
    }
    cout<<"second largest element is :"<<seclar;
    return 0;
}

