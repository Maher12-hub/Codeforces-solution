#include<iostream>
using namespace std;
int main(){
    long long int k,l,m,n,d,count=0;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    int i;
    for(i=1;i<=d;i++){
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
                count+=1;
            }


    }
    cout<<count<<endl;
    return 0;

}