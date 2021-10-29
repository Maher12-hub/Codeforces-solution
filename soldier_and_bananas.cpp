#include<iostream>
using namespace std;
int main(){
int k,n,w;
cin>>k>>n>>w;
int i,total_cost=0,borrowed;
for(i=1;i<=w;i++){
    total_cost+=i*k;
}
if(total_cost>n){
    borrowed=total_cost-n;
    cout<<borrowed<<endl;
}
else{
    cout<<"0"<<endl;
}
return 0;


}
