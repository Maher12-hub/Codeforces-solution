#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,a[n];
for(i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
        cout<<"HARD"<<endl;
        return 0;
    }
}
cout<<"EASY"<<endl;
return 0;


}
