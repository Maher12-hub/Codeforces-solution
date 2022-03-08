#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int i,sum=0,diff,count=0;
diff=240-k;
for(i=1;i<=n;i++){
sum+=i*5;
if(sum<=diff){
        count+=1;

}

}
cout<<count<<endl;
return 0;
}
