#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isTheOptionSafe(vector<vector<int>>& box,int row,int col,int po)
{ 
    for(int k=0;k<9;k++){
    if(box[row][k]==po){
    return false;

    }
  }

    for(int k=0;k<9;k++){
    if(box[k][col]==po){
      return false;

    }
  }
 int smrc=row/3*3;
 int smcc=col/3*3;
 for(int i=smrc;i<smrc+3;i++){
  for(int j=smcc;j<smcc+3;j++){
    if(box[i][j]==po){
     return false;
    }
   }
 }
  
  return true;
}

void sudoku(vector<vector<int>>& box,int bno){

  int row=bno/9;
  int col=bno%9;

 if(box.size()*box.size()==bno){
     for(int i=0;i<box.size();i++){
        for(int j=0;j<box.size();j++){
          cout<<box[i][j]<<"-";
    
        }
       cout<<endl;
      }
      return;
    }


  if(box[row][col]==0){
   for(int po=1;po<=9;po++){
     if(isTheOptionSafe(box,row, col, po)==true){
      box[row][col]=po;
      sudoku(box,bno+1);
      box[row][col]=0;
      }
     }
   }
 
  
  else{
    sudoku(box,bno+1);
   }

    

}




int main(){

vector<vector<int>> box {
     {3,0,6,5,0,8,4,0,0},
     {5,2,0,0,0,0,0,0,0},
     {0,8,7,0,0,0,0,3,1},
     {0,0,3,0,1,0,0,8,0},
     {9,0,0,8,6,3,0,0,5},
     {0,5,0,0,9,0,6,0,0},
     {1,3,0,0,0,0,2,5,0},
     {0,0,0,0,0,0,0,7,4},
     {0,0,5,2,0,6,3,0,0},

};
 sudoku(box,0);

}