#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
long long int n,num;
cin>>n;
string s1=to_string(n);
int i,a=0;
for(i=0;i<s1.length();i++){
    num=n%10;
    n=n/10;
    if(num!=4 && num!=7){
        a=1;
        break;
    }
}
if(a>0) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
return 0;


}
