#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin>>t;
for(int i=0;i<t;i++){
   long long int n,k,cf,res;
    cin>>n>>k;
    cf=(n+k-1)/(k);
    res=(cf*k+n-1)/(n);
    cout<<res<<endl;
}
return 0;

}
