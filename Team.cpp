#include<iostream>
using namespace std;
int main(){
int a,b,c,t,i;
int count=0;
cin>>t;
for(i=0;i<t;i++){

    cin>>a>>b>>c;
    if((a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1) ) {
            count+=1;
    }
}
cout<<count<<endl;


}
