#include<iostream>
#include<string.h>
using namespace std;
int main(){
char s1[101];
cin>>s1;
int a1=0,a2=0,i;
int b=strlen(s1);
for(i=0;i<strlen(s1);i++){
    if(s1[i]>='A' && s1[i]<='Z') a1+=1;
}
for(i=1;i<strlen(s1);i++){
    if(s1[i]>='A' && s1[i]<='Z') a2+=1;
}
if(b==1){
    if(s1[0]>='a' && s1[0]<='z') s1[0]=s1[0]-32;
    else if(s1[0]>='A' && s1[0]<='Z') s1[0]=s1[0]+32;
    cout<<s1<<endl;
}
else if(a1==b){
    for(i=0;i<b;i++){
        s1[i]=s1[i]+32;
    }
    cout<<s1<<endl;
}
else if(a2==b-1){
    for(i=0;i<b;i++){
        if(i==0){
            if(s1[i]>='a' && s1[i]<='z') s1[i]=s1[i]-32;
        }
        if(i>0){
            s1[i]=s1[i]+32;
        }
    }
cout<<s1<<endl;
}
else cout<<s1<<endl;
return 0;
}
