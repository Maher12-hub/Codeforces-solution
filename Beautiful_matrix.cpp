#include<iostream>
using namespace std;
int main(){
int row,col,i,j,move=0,n=2;
int mat[5][5];
for(i=0;i<=4;i++){
    for(j=0;j<=4;j++){
        cin>>mat[i][j];
    }

}
for(i=0;i<=4;i++){
    for(j=0;j<=4;j++){
        if(mat[i][j]==1){
                row=i;
        col=j;


        }
    }

}
for(i=0;i<=4;i++){
    if(row<2) {
        row++;
        move+=1;
    }
    if(row>2) {
        row--;
        move+=1;
    }
    if(row==2) break;
}
for(j=0;j<=4;j++){
    if (col<n) {
        col++;
        move+=1;
    }
    if(col>n){
        col--;
        move+=1;
    }
    if(col==2) break;
}


cout<<move<<endl;

return 0;
}
