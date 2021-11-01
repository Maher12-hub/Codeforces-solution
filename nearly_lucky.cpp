#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main(){
long long int n,num;
cin>>n;
string s1=to_string(n);
int i,a=0,lucky=0;
for(i=0;i<s1.length();i++){
    num=n%10;
    n=n/10;
    if(num==4 || num==7) lucky+=1;
}
if(lucky!=4 && lucky!=7) cout<<"NO"<<endl;
else if(lucky == 4 || lucky ==7) cout<<"YES"<<endl;
return 0;
}
