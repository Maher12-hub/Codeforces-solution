#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long int n,i=0;
double sum=0,sum1=0;
cin>>n;
long long int a[n];
double div;
while(true){
        cin>>a[i];
sum+=a[i];
i++;
if(cin.peek()=='\n') break;
}
div=ceil(sum/(double)n);
for(i=1;i<=n;i++){
    sum1+=4;
    if(sum1>sum){
        cout<<i<<endl;
        break;
    }
}


return 0;
}
