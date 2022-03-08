#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int arr[301];
    int n;
    cin>>n;
    long int l=0,m=n-1;
    for(long int j=0;j<n;j++){
        cin>>arr[j];

    }

while(true){
    if(n%2!=0){

    if(l==m){
        cout<<arr[l]<<endl;
        break;
    }
    else{
        cout<<arr[l]<<" "<<arr[m]<<" ";
        l++;
        m--;
    }
    }
    else if(n%2==0){
        if(l>m){
         cout<<endl;
         break;
        }
        else{
        cout<<arr[l]<<" "<<arr[m]<<" ";
        l++;
        m--;
    }
    }



}
}
return 0;
}
