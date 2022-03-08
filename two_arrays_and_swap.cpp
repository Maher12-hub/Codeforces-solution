#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n,k,m=0,sum=0;
    cin>>n>>k;
    vector<int>a;
    vector<int>b;
    for(int j=0;j<n;j++){
        int l;
        cin>>l;
        a.push_back(l);
    }
    for(int j=0;j<n;j++){
        int l;
        cin>>l;
        b.push_back(l);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());

    for(int j=0;j<n;j++){
        if(a[j]<b[j]&& j<k){

            sum+=b[j];
        }
        else sum+=a[j];

    }
    cout<<sum<<endl;

}

return 0;

}
