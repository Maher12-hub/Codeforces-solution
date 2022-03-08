#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 long  int prime[1000005];
void sieb(){
    prime[0]=1;
    prime[1]=1;
for( long int i=4;i<1000001;i+=2){
    prime[i]=1;
}
for(long int i=3;i*i<1000001;i+=2){
    if(prime[i]==0){
        for(long int j=i*i;j<1000001;j+=2*i){
            prime[j]=1;
        }
    }
}

}
int main(){
    sieb();
    long int n;
    cin>>n;
    for( long int i=0;i<n;i++){
        long long int a;
        long long int b;
        cin>>a;
        b=sqrt(a);
        if(prime[b]==0 && b*b==a){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

return 0;
}
