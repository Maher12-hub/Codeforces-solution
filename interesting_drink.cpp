#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int n,q;
int get_lowerbound(int key){
int l=0,r=n-1,mid=0;
while(l<=r){
    mid=(l+r)/2;
    if(arr[mid]==key) l=mid+1;
    else if(key<arr[mid]) r=mid-1;
    else if(key>arr[mid]) l=mid+1;
}
return r+1;

}


int main(){
cin>>n;
for(int i=0;i<n;i++){

    int a;
    cin>>a;
    arr.push_back(a);

}
sort(arr.begin(),arr.end());
cin>>q;
for(int j=0;j<q;j++){
    int b;
    cin>>b;
    cout<<get_lowerbound(b)<<endl;;
}
return 0;
}
