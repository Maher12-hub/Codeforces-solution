#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i,j;
int n;
cin>>t;
for(i=0;i<t;i++){
    cin>>n;
    int a[n],b[55],c=0;
    for(j=0;j<n;j++){
        cin>>a[j];
    }
    sort(a,a+n);
    for(j=1;j<n;j++){
        b[j-1]=a[j]-a[j-1];
    }
    sort(b,b+(n-1));
    for(j=0;j<n-1;j++){
        if(b[j]>1) c=1 ;
    }
    if(c==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
return 0;
}
