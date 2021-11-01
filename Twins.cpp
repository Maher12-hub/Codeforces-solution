#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
int a[n];
int sum1=0,sum2=0,count=0;
for(i=0;i<n;i++){
    cin>>a[i];
    sum1+=a[i];
}
sum1=sum1/2;
sort(a,a+n);
for(j=n-1;j>=0;j--){
    sum2+=a[j];
    count+=1;
    if(sum2>sum1) break;
}
cout<<count<<endl;
return 0;

}
