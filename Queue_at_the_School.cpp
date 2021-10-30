#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1;
char s2;
int i,j,n,t;
cin>>n>>t;
cin>>s1;
for(i=0;i<t;i++){
    for(j=0;j<s1.length();j++){
        if(s1[j]=='B' && s1[j+1]=='G'){
            s2=s1[j];
            s1[j]=s1[j+1];
            s1[j+1]=s2;
            j++;
        }
    }
}

cout<<s1<<endl;
return 0;

}
