#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,e=0;
cin>>n>>t;
int a[30005];
for(int i=1;i<n;i++){
    cin>>a[i];

}
for(int i=1;i<n;i++){
    int d;
    d=i+a[i];
    if(d==t) e=1;

}

if(e==1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
