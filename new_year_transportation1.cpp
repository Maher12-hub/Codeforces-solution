#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int n,t,flag=0,y;
int arr[20];
bool vis[20];
void dfs(int x){
if(vis[x]) return;
vis[x]=1;
y=x+arr[x];
if(y==t){
    flag=1;
    return;
}
dfs(y);

}
int main(){
cin>>n>>t;
for(int i=1;i<n;i++){
    cin>>arr[i];
}
dfs(1);
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;

}
