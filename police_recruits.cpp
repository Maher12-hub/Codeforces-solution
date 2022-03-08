#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,x,i,sum=0,untrt_case=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>x;
    if(x>0) sum=sum+x;
    else if(x<0 && sum>0) sum=sum+x;
    else if(sum==0) untrt_case+=1;
}

cout<<untrt_case<<endl;
return 0;
}
