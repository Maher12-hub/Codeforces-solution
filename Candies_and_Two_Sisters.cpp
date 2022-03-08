#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,n1,a,b,sum=0,i,j=1,t,c=0;
cin>>t;
for(i=0;i<t;i++){
    cin>>n;
    n1=n;
    while(c==0){
        a=n-1;
        b=j;
        j++;
        n--;
        if(a>b){
            sum+=1;

        }
        else break;
    }
    if(sum>0) cout<<sum<<endl;
    else cout<<"0"<<endl;
    sum=0;
    j=1;

}
return 0;

}
