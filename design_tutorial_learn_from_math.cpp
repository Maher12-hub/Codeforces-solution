#include<iostream>
using namespace std;
int is_prime(int k){
int i;
for(i=2;i<k;i++){
    if(k%i==0) return 1;
}
return 0;


}
int main(){
int x;
cin>>x;
int a,b,n,m,i;
a=9;
b=x-9;

for(i=0;i<x;i++){
    n=is_prime(a);
    m=is_prime(b);
    if(n==1 && m==1){
        cout<<a<<" "<<b<<endl;
        break;
    }
    a++;
    b--;
}
return 0;
}
