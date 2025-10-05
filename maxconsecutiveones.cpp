#include<bits/stdc++.h>
using namespace std;
int findmaxconsecutiveones(vector<int>a){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=findmaxconsecutiveones(a);
    cout<<"max consecutive ones are:"<<res;
    return 0;   
}