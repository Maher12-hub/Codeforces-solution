#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int i;
for(i=0;i<n;i++){
    cin>>a[i];
}
int maxa=a[0],mina=a[n-1],max_pos=0,min_pos=0,ans=0;


for(i=0;i<n;i++){
    if(a[i]>maxa){
        maxa=a[i];
        max_pos=i;
    }
    if(a[i]<=mina){
        mina=a[i];
        min_pos=i;
    }
}

ans=max_pos+(n-1)-min_pos;
if(min_pos<max_pos) ans--;
cout<<ans<<endl;
return 0;


}
