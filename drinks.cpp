#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int i;
double sum=0;
double total=n*100;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    sum+=a[i];
}
double result=(sum/total)*100;
cout<<result<<endl;
return 0;

}
