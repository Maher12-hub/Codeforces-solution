#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1,s2,s3;
int i,j,count_s1=0,count_s2=0,count_s3=0;
cin>>s1;
cin>>s2;
cin>>s3;
for(i=0;i<s1.length();i++){
    for(j=0;j<s3.length();j++){
        if(s1[i]==s3[j]){
            s1[i]='a';
            s3[j]='b';
            j=s3.length();
        }
    }
}
for(i=0;i<s2.length();i++){
    for(j=0;j<s3.length();j++){
        if(s2[i]==s3[j]){
            s2[i]='a';
            s3[j]='b';
        }
    }
}

for(i=0;i<s1.length();i++){
    if(s1[i]=='a') continue;
    else count_s1+=1;
}
for(i=0;i<s2.length();i++){
        if(s2[i]=='a') continue;
        else count_s2+=1;

}
for(i=0;i<s3.length();i++){
    if(s3[i]=='b') continue;
    else count_s3+=1;
}
if(count_s1>0 || count_s2>0 || count_s3>0){
    cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;
return 0;


}
