#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int prime[10000]={0};
int i,j;
int n;
cin>>n;
long long int a,sqr;
for(i=2;i<=10000;i++){
    if(prime[i]==0){
    for(j=i*i;j<=10000;j+=i) prime[j]=1;
    }
}


for(i=0;i<=n;i++){
    cin>>a;
    if(a==1 || a==0) cout<<"NO"<<endl;
    sqr=sqrt(a);
    if(sqr*sqr==a && prime[sqr]==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;

}
