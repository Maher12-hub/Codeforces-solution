#include<iostream>
using namespace std;
int main(){
int n,i,p,q,room=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>p>>q;
    if(q-p>=2) room+=1;
}
cout<<room<<endl;
return 0;

}
