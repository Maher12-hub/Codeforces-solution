#include<iostream>
#include<string.h>
using namespace std;
int main(){
int n,k=0;
cin>>n;
char s1[n];
while(true){
    cin>>s1[k];
    k++;
    if(cin.peek()=='\n') break;
}
int i,count=0,j;
for(i=0;i<strlen(s1);i++){
    if(s1[i]>='A' && s1[i]<='Z') s1[i]=s1[i]+32;
}
for(i=0;i<strlen(s1);i++){
    for(j=0;j<strlen(s1);j++){
        if(i==j) continue;
        if(s1[i]==s1[j]) s1[i]='A';
    }
}
for(i=0;i<strlen(s1);i++){
    if(s1[i]>='a' && s1[i]<='z') count+=1;
}
if(count==26) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;


}
