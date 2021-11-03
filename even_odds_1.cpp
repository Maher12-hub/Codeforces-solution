#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long int n,k,part;
cin>>n>>k;
if(n%2!=0) part=((n/2)+1);
else part=n/2;
if(k>part) cout<<(k-part)*2<<endl;
else cout<<2*k-1<<endl;
return 0;

}
