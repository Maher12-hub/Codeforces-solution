#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Kth_notdivisible( unsigned long int n,unsigned long int k){
 unsigned long int l=1,r=INT_MAX,mid=0,sol,ans;
while(l<=r){
    mid=(l+r)/2;
    sol=mid-mid/n;
    if(k>sol) l=mid+1;
    else if(k<sol) r=mid-1;
    else{
            ans=mid;
            r=mid-1;

    }
}
cout<<ans<<endl;

}

int main(){
 unsigned long int n,k,t,i;
cin>>t;
for(i=0;i<t;i++){
cin>>n>>k;
Kth_notdivisible(n,k);
}
return 0;
}
