#include<iostream>
#include<string.h>
using namespace std;
int main(){
long long int n;
cin>>n;
long long int a[n];
int i,group=0;
string b,c,d,e;
for(i=0;i<n;i++){
    cin>>a[i];
}
if(n==1){
    group+=1;
    cout<<group<<endl;
    return 0;
}
for(i=0;i<n;i++){
    if(i==0) {
        b=to_string(a[i]);
        c=to_string(a[i+1]);
        if(b==c){
            group+=1;
            i+=1;
        }
        else if(b!=c) {
                c=" ";
        group+=1;
        }
    }
    if(i>0){
        d=to_string(a[i]);
        if(c==d) continue;
        else if(c!=d) c=d;
        e=to_string(a[i+1]);
        if(d==e) {
            group+=1;
            i+=1;
        }
        else group+=1;
    }
}
cout<<group<<endl;


}
