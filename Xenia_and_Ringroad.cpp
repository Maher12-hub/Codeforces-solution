#include<iostream>
using namespace std;
int main(){
 int n,m,i;
cin>>n>>m;
int arr[m];
for(i=0;i<m;i++){
    cin>>arr[i];
}
long long int count=arr[0]-1;
for(i=0;i<m-1;i++){
        if(arr[i]>arr[i+1]) count+=(n-arr[i])+arr[i+1];
        else if(arr[i]<arr[i+1]) count+=arr[i+1]-arr[i];

}
cout<<count<<endl;
return 0;
}
