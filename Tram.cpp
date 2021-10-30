#include<iostream>
using namespace std;
int main(){
int a[1001],b[1001],d[1001];
long long int c;
int i,j=0,n;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i]>>b[i];
}
for(i=0;i<n;i++){
    if(i==0){
        d[j]=b[i];
        j++;
        continue;
    }
    c=b[i-1]-a[i];
    b[i]=b[i]+c;
    d[j]=b[i];
    j++;
}
int max=d[0];
for(i=0;i<j;i++){
    if(d[i]>max) max=d[i];
}
cout<<max<<endl;

return 0;


}
