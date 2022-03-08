#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
int n,l,k,i;
cin>>n>>l;
int arr[n];
int maxdist=0,m,result,result1;
for(i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for(i=1;i<n;i++){
    m=arr[i]-arr[i-1];
    if(m>maxdist) maxdist=m;
}
result=max(arr[0]-0,l-arr[n-1])*2;
result1=max(maxdist,result);
cout.precision(20);
cout<<fixed<<result1/2.0<<endl;
return 0;

}
