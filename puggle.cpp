#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,k=0,l=0,n,m,b,diff,maxa=0,mina=1001,min_value=1001;
cin>>n>>m;
int a[m];
int c[m];
b=n-1;
while(true){
    cin>>a[l];
    l++;
    if(cin.peek()=='\n') break;
}
sort(a,a+m);
for(i=0;i<m;i++){
    for(j=i;j<=b;j++){
            if(a[j]>=maxa) maxa=a[j];
            if(a[j]<=mina) mina=a[j];

    }
    diff=maxa-mina;
    c[k]=diff;
    maxa=0;
    mina=1001;
    k++;
    b++;
    if(b>=m) break;


}
for(i=0;i<k;i++){
    if(c[i]<min_value) min_value=c[i];
}
cout<<min_value<<endl;


return 0;





}
