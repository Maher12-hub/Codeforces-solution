#include<iostream>
#include<math.h>
using namespace std;
int main(){
double n,m,a;
double flagstone;
cin>>n>>m>>a;
flagstone=(long long)ceil(n/a)* (long long)ceil(m/a);
cout<<flagstone<<endl;
return 0;



}
