#include<bits/stdc++.h>
using namespace std;
vector<int> findunion(vector<int>&a,vector<int>&b){
        int n=a.size();
        int m=b.size();
        int i=0;
        int j=0;
        vector<int>unionarr;
        while(i<n &&j<m){
            if(a[i]<=b[j]){
                if(unionarr.empty() || unionarr.back()!=a[i]){
                    unionarr.push_back(a[i]);
                }
                i++;
            }
            else{
                if(unionarr.size()==0 || unionarr.back()!=b[j]){
                    unionarr.push_back(b[j]);
                }
                j++;
            }
        }
        while (i < n) {
        if (unionarr.empty() || unionarr.back() != a[i]) {
            unionarr.push_back(a[i]);
        }
        i++;
    }
     while (j < m) {
        if (unionarr.empty() || unionarr.back() != b[j]) {
            unionarr.push_back(b[j]);
        }
        j++;
    }
    return unionarr;
}
vector<int>findintersection(vector<int>&a,vector<int>&b){
        int n=a.size();
        int m=b.size();
        int i=0;
        int j=0;
        vector<int>intersectionarr;
        while(i<n &&j<m){
            if(a[i]<b[j]){
                i++;
            }
            else if(b[j]<a[i]){
                j++;
            }
            else{
                if (intersectionarr.empty() || intersectionarr.back() != a[i]) {
                intersectionarr.push_back(a[i]);
            }
                i++;
                j++;
            }
        }
    return intersectionarr;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>unionarr=findunion(a,b);
    vector<int>intersectionarr=findintersection(a,b);
    cout<<"union array:";
    for(int i=0;i<unionarr.size();i++){
        cout<<unionarr[i]<<" ";
    }
    cout<<"\n";
    cout<<"intersection array:";
    for(int i=0;i<intersectionarr.size();i++){
        cout<<intersectionarr[i]<<" ";
    }
    return 0;
}