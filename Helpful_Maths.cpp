#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
string s1;
cin>>s1;
int a[1001],i,j=0;
int b,k;
for(i=0;i<s1.length();i+=2){
a[j]=s1[i]-'0';
j++;
}
for(i=0;i<j;i++){
    for(k=j-1;k>i;k--){
        if(a[k-1]>a[k]){
            b=a[k-1];
            a[k-1]=a[k];
            a[k]=b;
        }
    }
}
for(i=0;i<j;i++){
    cout<<a[i];
    if(i==j-1) break;
    else cout<<"+";
}
cout<<endl;

return 0;
}
