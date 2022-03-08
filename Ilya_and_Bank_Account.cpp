#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define lln long long int
int main(){
lln n=INT_MIN;
cin>>n;
if(n>0){
    cout<<n<<endl;
    return 0;
}
n=abs(n);
lln a,c;
int b,d;
b=(n%10);
a=n/10;
d=(a%10);
c=a/10;
if(b>d) cout<<-(n/10)<<endl;
else{
    if(n<100){
        if(b==0) cout<<abs(b)<<endl;
        else cout<<"-"<<abs(b)<<endl;
    }
    else cout<<"-"<<c<<abs(b)<<endl;
}
return 0;
}
