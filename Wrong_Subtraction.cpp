#include<iostream>
using namespace std;
int main(){
long long int n,k;
cin>>n>>k;
int i;
for(i=0;i<k;i++){
    if(n%10==0) n=n/10;
    else n--;
}
cout<<n<<endl;
return 0;



}
