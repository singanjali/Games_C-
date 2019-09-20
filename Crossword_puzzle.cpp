#include<bits/stdc++.h>
using namespace std;


void crossword(vector<vector<char>>& board,vector<string> words,int bno,bool bx){
   
   
  int row=bno/9;
  int col=bno%9;


 if(board.size()*board.size()==bno){
     for(int i=0;i<board.size();i++){
        for(int j=0;j<board.size();j++){
          
        cout<<board[i][j]<<"-";
        }
       cout<<endl;
      }
      return;
    }


  if(board[row][col]=='-'){
    words.
   for(int po = 0;po<=words.size();po++){
     if(isTheOptionSafe(box,row, col, po)==true){
      board[row][col]=words[po];
      crossword( board, words,bno+1,bx);
      board[row][col]=0;
      }
     }
   }
}


int main()
{
   vector<string> words{"agra","norway","england","gwalior"};
   vector<vector<char>> board{
       {'+','-','+','+','+','+','+','+','+','+'},
       {'+','-','+','+','+','+','+','+','+','+'},
       {'+','-','-','-','-','-','-','-','+','+'},
       {'+','-','+','+','+','+','+','+','+','+'},
       {'+','-','+','+','+','+','+','+','+','+'},
       {'+','-','-','-','-','-','-','+','+','+'},
       {'+','-','+','+','+','-','+','+','+','+'},
       {'+','+','+','+','+','-','+','+','+','+'},
       {'+','+','+','+','+','-','+','+','+','+'},
       {'+','+','+','+','+','+','+','+','+','+'},
   } ;
   crossword(board,words,0);

}.
