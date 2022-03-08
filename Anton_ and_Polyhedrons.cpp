#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s1;
int n,i,sum=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>s1;
    if(s1=="Tetrahedron") sum+=4;
    else if(s1=="Cube") sum+=6;
    else if(s1=="Octahedron") sum+=8;
    else if(s1=="Dodecahedron") sum+=12;
    else if(s1=="Icosahedron") sum+=20;
}
cout<<sum<<endl;
return 0;


}
