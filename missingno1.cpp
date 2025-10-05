#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(a[j]==i){
                flag=true;
                break;
            }
        }
        if(!flag){
        cout<<"missing number:"<<i<<endl;
        return 0;
    }
}
    return 0;
}