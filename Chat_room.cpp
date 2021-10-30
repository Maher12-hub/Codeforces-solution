#include<iostream>
using namespace std;
int main(){
string s1;
string s2="hello";
cin>>s1;
int i,j=0,count=0;
for(i=0;i<s1.length();i++){
 if(s1[i]==s2[j]){
    count++;
    j++;
 }
 if(count==s2.length()) break;
}
if(count==s2.length()) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;

}
