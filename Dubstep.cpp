#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1;
cin>>s1;
int i;
for(i=0;i<s1.length();i++){
    if(s1[i]=='W' && s1[i+1]=='U' && s1[i+2]=='B'){
        i+=2;
        cout<<" ";
    }
    else cout<<s1[i];
}

}
