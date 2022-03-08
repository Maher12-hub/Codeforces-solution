#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,n;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n;
    for(int k=2;k<=29;k++){
        long long int a=pow(2,k)-1;
        if(n%a==0) {
                cout<<n/a<<endl;
                break;
        }
    }
}
return 0;
}
