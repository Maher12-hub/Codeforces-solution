#include<iostream>
using namespace std;
int main(){
int n,k,a,team_no,i,count=0;
cin>>n>>k;
for(i=1;i<=n;i++){
    cin>>a;
    if(5-a>=k) count+=1;
}
team_no=count/3;
cout<<team_no<<endl;
return 0;
}
