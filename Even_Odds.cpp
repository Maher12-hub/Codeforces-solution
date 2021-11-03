#include<iostream>
using namespace std;
int main(){
long long int n,k;
cin>>n>>k;
long long int a[n];
long long int i,j=0;
for(i=1;i<=n;i++){
    if(i%2 !=0){
        a[j]=i;
        j++;
    }
}
for(i=1;i<=n;i++){
    if(i%2==0){
        a[j]=i;
        j++;
    }
}
cout<<a[k-1]<<endl;
return 0;


}
