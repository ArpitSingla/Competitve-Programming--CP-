#include<bits/stdc++.h>
using namespace std;

bool findEmpty(int board[9][9],int &row,int &col){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]==0){
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}

bool checkSudoku(int board[9][9],int n,int row,int col){
    for(int j=0;j<9;j++){
        if(board[row][j]==n||board[j][col]==n){
            return true;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int row_temp=row-(row%3);
            int col_temp=col-(col%3);
            if(board[i+row_temp][j+col_temp]==n){
                return true;
            }
        }
    }
    return false;
}

bool solveSudoku(int board[9][9]){
    int row,col;
    if(!findEmpty(board,row,col)){
        return true;
    }
    for(int i=1;i<=9;i++){
        if(!checkSudoku(board,i,row,col)){
            board[row][col]=i;
            if(solveSudoku(board)){
                return true;
            }
            board[row][col]=0;
        }
    }
    return false;    
}

int main(){
    int board[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
        }
    }
    solveSudoku(board);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j];
        }
        cout<<endl;
    }
    return 0;
}