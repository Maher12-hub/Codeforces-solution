#include<iostream>
using namespace std;
int main(){
string s1;
cin>>s1;
int i,count_0=0,count_1=0;
for(i=0;i<s1.length();i++){
    if(s1[i]=='0'){
        if(s1[i+1]=='0') count_0+=2;
        if(s1[i+2]=='0') count_0+=1;
        if(s1[i+3]=='0') count_0+=1;
        if(s1[i+4]=='0') count_0+=1;
        if(s1[i+5]=='0') count_0+=1;
        if(s1[i+6]=='0') count_0+=1;
        if(count_0>=7) {
                cout<<"YES"<<endl;
        return 0;
        }
        else count_0=0;

    }
    if(s1[i]=='1'){
        if(s1[i+1]=='1') count_1+=2;
        if(s1[i+2]=='1') count_1+=1;
        if(s1[i+3]=='1') count_1+=1;
        if(s1[i+4]=='1') count_1+=1;
        if(s1[i+5]=='1') count_1+=1;
        if(s1[i+6]=='1') count_1+=1;
        if(count_1>=7) {
                cout<<"YES"<<endl;
        return 0;
        }
        else count_1=0;

    }

}
cout<<"NO"<<endl;
return 0;



}
