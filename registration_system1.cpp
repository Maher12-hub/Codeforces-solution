#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int n,i;
cin>>n;
map<string,int>user;
for(i=0;i<n;i++){
    cin>>s;
    if(user[s]==0){
        cout<<"OK"<<endl;
        user[s]=1;
    }
    else{
        cout<<s<<user[s]<<endl;
        user[s]++;
    }
}
return 0;


}

