#include<iostream>
#include<string.h>
using namespace std;
int main(){
int i,j,n;
cin>>n;
char s1[n];
cin>>s1;
char a,b;
for(i=0;i<strlen(s1);i++){
    if(s1[i]>='A' && s1[i]<='Z'){
        a=s1[i]+32;
        for(j=0;j<strlen(s1);j++){
            if(s1[j]==a){
            cout<<"YES"<<endl;
            return 0;
            }
        }
    }
    else if(s1[i]>='a' && s1[i]<='z'){
        b=s1[i]-32;
        for(j=0;j<strlen(s1);j++){
            if(s1[j]==b)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

}
cout<<"NO"<<endl;
return 0;



}
