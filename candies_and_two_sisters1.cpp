#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,n1,n2,a,b,sum=0,i,j=1,t,c=0;
cin>>t;
for(i=0;i<t;i++){
    cin>>n;
    if(n%2!=0){
    n1=(n/2) + 1;
    n2=n/2;
    while(c==0){
    a=n1;
    b=n2;
    n1++;
    n2--;
    if(b==0) break;
    else if(a+b==n) sum+=1;

    }
    }
     if(n%2==0){
        n1=n/2;
        n2=n1;
        while(c==0){
        a=++n1;
        b=--n2;
        if(b==0) break;
        else if(a+b==n) sum+=1;
        }
    }


    if(sum>0) cout<<sum<<endl;
    else cout<<"0"<<endl;
    sum=0;


}
return 0;

}
