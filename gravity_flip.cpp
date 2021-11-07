#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,b;
cin>>n;
int a[n];
int i=0,j;
while(true){
    cin>>a[i];
    i++;
    if(cin.peek()=='\n') break;
}
for(i=0;i<n;i++){
    for(j=n-1;j>0;j--){
        if(a[j-1]>=a[j]) {
            b=a[j-1];
            a[j-1]=a[j];
            a[j]=b;
        }
    }
}
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
return 0;


}
