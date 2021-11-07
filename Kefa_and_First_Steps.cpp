#include<iostream>
using namespace std;
int main(){
long long int n,count=1;
int i,j=0;
cin>>n;
long long int a[n],b[n];
while(true){
    cin>>a[j];
    j++;
    if(cin.peek()=='\n') break;
}

for(i=1,j=0;i<n;i++){
        if(a[i]>=a[i-1]){
                count+=1;
                b[j]=count;
                j++;
        }
        else{

            count=1;
        }
    }
if(j==0) cout<<count<<endl;
else{
int maxm=b[0];
for(i=0;i<j;i++){
    if(b[i]>maxm) maxm=b[i];
}
cout<<maxm<<endl;
}
return 0;

}
