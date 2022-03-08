#include<iostream>
using namespace std;
int main(){
long long int n,m,count=0,i,j;
cin>>n;
for(i=0;i<n;i++){
        cin>>m;
for(j=1;j<=m;j++){
    if(m%j==0) count+=1;
}
if(count==3) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
count=0;
}
return 0;


}
