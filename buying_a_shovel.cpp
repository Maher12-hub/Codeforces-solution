#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int k,r,i=0,m;
cin>>k>>r;
bool a=true;
while(a){
   i++;
   m=k*i;
   if(m%10==0 || m%10 ==r) break;
}
cout<<i<<endl;
}
