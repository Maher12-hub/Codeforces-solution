#include<iostream>
#include<string.h>
using namespace std;
int main(){

string s1;
char word2[101];
char word3[101];
cin>>s1;
cin>>word2;
int i,j=0;
for(i=s1.length()-1;i>=0;i--){
    word3[j]=s1[i];
    j++;
}
int count=0;
for(i=0;i<j;i++){
    if(word2[i]==word3[i]){
        count+=1;
    }
    else{
        cout<<"NO"<<endl;
        break;
    }
}
if(count==j) cout<<"YES"<<endl;
return 0;


}
