#include<iostream>
using namespace std;
int main(){
int n,h;
cin>>n>>h;
int a[2001];
int i,width=0;
for(i=0;i<n;i++){

    cin>>a[i];
}
for(i=0;i<n;i++){
    if(a[i]>h) width+=2;
    else if(a[i]<=h) width+=1;
}
cout<<width<<endl;
return 0;



}
