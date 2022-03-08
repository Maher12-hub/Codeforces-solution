#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,c,i,j,k,rem,ans=0;
cin>>n>>a>>b>>c;
for(i=0;i*a<=n;i++){
    for(j=0;i*a+j*b<=n;j++){
        rem=n-i*a-j*b;
        if(rem%c==0){
            k=rem/c;
            ans=max(ans,i+j+k);
        }
    }
}
cout<<ans<<endl;
return 0;
}
