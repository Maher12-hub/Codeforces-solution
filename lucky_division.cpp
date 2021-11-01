#include<iostream>
#include<string.h>
using namespace std;
int main(){
long long int n,a;
cin>>n;
a=n;
string s1=to_string(n);
int i=0,count=0;
while(i<s1.length()){
    if(n%10==4 || n%10==7){
    n=n/10;
    count+=1;

    }
    i++;
}
if(count != s1.length()) n=a;
if(count==s1.length()) cout<<"YES"<<endl;
else if(n%4==0 || n%7==0 || n%47==0 || n%744==0 || n%74==0){
        cout<<"YES"<<endl;
    }
else if(n%4 !=0 && n%7 !=0){
        cout<<"NO"<<endl;

    }

return 0;

}
