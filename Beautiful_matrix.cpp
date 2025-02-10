
#include <iostream>
#include <cmath>
using namespace std;
int main(){

int row,col;
int x_steps,y_steps;
int mat[5][5];
for(int i=0;i<5;i++){
    for (int j=0;j<5;j++) {
        cin>>mat[i][j];
        if(mat[i][j]==1){
            row=i+1;
            col=j+1;}
    }
}

x_steps = abs(row - 3);
y_steps = abs(col -3);
int moves = x_steps + y_steps;
cout<<moves;
}