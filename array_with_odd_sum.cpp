#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a,sum=0,even=0,odd=0;
    cin>>a;
    vector<int>arr;
    for(int j=0;j<a;j++){
        int b;
        cin>>b;
        arr.push_back(b);
    }
    for(int k=0;k<arr.size();k++){
        if(arr[k]%2!=0) odd+=1;
        else if(arr[k]%2==0) even+=1;
        sum+=arr[k];

    }
    if(sum%2!=0) cout<<"YES"<<endl;
    else{
        if(even>0 && odd>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}

return 0;
}
