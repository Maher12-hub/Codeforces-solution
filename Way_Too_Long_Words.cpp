#include<iostream>
using namespace std;
int main(){
string word;
int len,t,i;
cin>>t;
for(i=0;i<t;i++){
    cin>>word;
    len=word.size();
    if(len>10) {
            cout<<word[0]<<len-2<<word[len-1]<<endl;
    len=0;
    }
    else cout<<word<<endl;

}



return 0;
}
