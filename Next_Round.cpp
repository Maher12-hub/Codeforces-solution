#include<iostream>
using namespace std;
int main(){
int n,k,score[100],i=0,next_round=0;
cin>>n>>k;
while (true){
    cin>>score[i];
    i++;
    if (cin.peek()=='\n') break;

}
for(i=0;i<n;i++){
    if(score[i]>=score[k-1]&&score[i]>0){
        next_round+=1;

    }

}
cout<<next_round<<endl;




return 0;
}
