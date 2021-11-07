#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int s1,s2,s3,s4;
long long int a[4],shoe=0;
int i,j=0;
while(true){
    cin>>a[j];
    j++;
    if(cin.peek()=='\n') break;
}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(i==j) continue;
        if(a[i]==a[j]){
            shoe+=1;
            a[i]=0;
            if(shoe==3) break;
        }
    }
}
cout<<shoe<<endl;
return 0;





}
