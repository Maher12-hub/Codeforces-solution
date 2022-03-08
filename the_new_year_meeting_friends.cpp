#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=3;
int a[n];
int i;
for(i=0;i<3;i++) cin>>a[i];
sort(a,a+n);
cout<<((a[1]-a[0])+(a[2]-a[1]))<<endl;
return 0;
}
