#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1;
int count;
cin>>s1;
int i,j;
count=s1.length();
for(i=0;i<s1.length();i++){
    for(j=0;j<s1.length();j++){
        if(i==j) continue;
        if(s1[i]==s1[j]){
                count--;
        s1[i]='\0';
        }
    }
}
if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
else if(count%2!=0) cout<<"IGNORE HIM!"<<endl;
return 0;


}
