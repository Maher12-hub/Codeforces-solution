#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],b[n];
int i=0;
while(true){
    cin>>a[i];
    if(cin.peek()=='\n') break;
    i++;
}
for(i=0;i<n;i++){
    b[a[i]-1]=i+1;
}
for(i=0;i<n;i++){
    cout<<b[i]<<" ";
}
cout<<endl;

}
