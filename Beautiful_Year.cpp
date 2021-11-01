#include<iostream>
using namespace std;
int main(){
int year,a,b,c,d,e,i,j;
cin>>year;
i=++year;
while(true){
    j=i;
    a=i%10;
    i=i/10;
    b=i%10;
    i=i/10;
    c=i%10;
    d=i/10;
    if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d){
        cout<<j<<endl;
        break;
    }
    else {
            i=++j;
    }
}

}
