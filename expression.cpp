#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,f,g,h,k;
cin>>a;
cin>>b;
cin>>c;
d=a+b*c;
e=a*(b+c);
f=(a*b)+c;
g=(a+b)*c;
h=a*b*c;
k=a+b+c;
int i[6];
i[0]=d;
i[1]=e;
i[2]=f;
i[3]=g;
i[4]=h;
i[5]=k;
int max=i[0],j;
for(j=0;j<6;j++){
    if(i[j]>max) max=i[j];
}
cout<<max<<endl;
return 0;



}
