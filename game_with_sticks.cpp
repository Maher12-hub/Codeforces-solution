#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,mini;
cin>>n>>m;
mini=min(n,m);
if(mini%2==0) cout<<"Malvika"<<endl;
else if(mini%2!=0) cout<<"Akshat"<<endl;
return 0;
}
