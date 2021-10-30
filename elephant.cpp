#include<iostream>
using namespace std;
int main(){
long int sum=0;
int total_steps=0,x;
cin>>x;
while(true){
        sum+=5;
total_steps+=1;
if(sum>=x){
    cout<<total_steps<<endl;
    break;
}

}
return 0;

}
