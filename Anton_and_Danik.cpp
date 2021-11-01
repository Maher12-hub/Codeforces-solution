#include<iostream>
#include<string.h>
using namespace std;
int main(){
int n,i;
cin>>n;
string s1;
cin>>s1;
int anton_won=0,danik_won=0;
for(i=0;i<s1.length();i++){
    if(s1[i]=='A') anton_won+=1;
    else if(s1[i]=='D') danik_won+=1;
}
if(anton_won>danik_won) cout<<"Anton"<<endl;
if(danik_won>anton_won) cout<<"Danik"<<endl;
if(anton_won==danik_won) cout<<"Friendship"<<endl;
return 0;

}
