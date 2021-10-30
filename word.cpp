#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1;
int count_capital=0,count_small=0;
cin>>s1;
int i;
for(i=0;i<s1.length();i++){
    if(s1[i]>='A' && s1[i]<='Z') count_capital+=1;
    if(s1[i]>='a' && s1[i]<='z') count_small+=1;

}
if(count_capital>count_small){
    for(i=0;i<s1.length();i++){
        if(s1[i]>='A' && s1[i]<='Z') continue;
        else s1[i]=s1[i]-32;
    }
}
if(count_small>count_capital){
    for(i=0;i<s1.length();i++){
        if(s1[i]>='a' && s1[i]<='z') continue;
        else s1[i]=s1[i]+32;
    }
}
if(count_small==count_capital){
    for(i=0;i<s1.length();i++){
        if(s1[i]>='A' && s1[i]<='Z') {
            s1[i]=s1[i]+32;
        };

    }
}
for(i=0;i<s1.length();i++){
    cout<<s1[i];
}
cout<<endl;
return 0;


}
