#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j=0,count_even=0,count_odd=0,even_pos,odd_pos;
cin>>n;
int a[n];
while(true){
    cin>>a[j];
    j++;
    if(cin.peek()=='\n') break;
}
for(i=0;i<j;i++){
    if(a[i]%2==0){
        count_even+=1;
        even_pos=i+1;
    }
    if(a[i]%2 != 0){
        count_odd+=1;
        odd_pos=i+1;
    }
}
if(count_even==1) cout<<even_pos<<endl;
else if(count_odd==1) cout<<odd_pos<<endl;
return 0;
}
