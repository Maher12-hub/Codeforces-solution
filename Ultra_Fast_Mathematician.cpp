#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
char a[101],b[101];
cin>>a;
cin>>b;
int i=0;
for(i=0;a[i]!='\0' && b[i] !='\0';i++){
    if(a[i]==b[i]) cout<<0;
    else cout<<1;
}
cout<<endl;
return 0;

}
