#include<iostream>>
#include<string.h>
using namespace std;
int main(){
int x=0,t,i;
char letter[10];
cin>>t;
for(i=0;i<t;i++){
    cin>>letter;
    if((strcmp(letter,"X++")==0) || (strcmp(letter,"++X")==0)) x++;
    else if ((strcmp(letter,"X--")==0) || (strcmp(letter,"--X")==0)) x--;
}
cout<<x<<endl;
return 0;

}
