#include<iostream>
#include<string.h>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
string str1,str2;
int i;
cin>>str1;
cin>>str2;
for(i=0;i<str1.length();i++){
    if(str1[i]>='A' && str1[i]<='Z') str1[i]+=32;
    if(str2[i]>='A' && str2[i]<='Z') str2[i]+=32;

    if(str1[i]>str2[i]) {
        cout<<"1"<<endl;
        return 0;
    }
    if(str1[i]<str2[i]){
            cout<<"-1"<<endl;
            return 0;
    }
}
cout<<"0"<<endl;

return 0;

}
