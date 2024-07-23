// #include <bits/stdc++.h> 
// bool isSafe(vector<vector<int>>& board, int row,int col,int val)
// {
//     //checking row
//     for(int i=0;i<9;i++)
//     {
//         if(board[row][i]==val) return false; //checking row
//         if(board[i][col]==val) return false; //checking column
//         if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val) return false; //checking 3x3 grid
//     }
//     return true;

   
    
// }
// bool solve(vector<vector<int>>& board)
// {
//     int n=board[0].size();

//     for(int row=0;row<n;row++)//traversing rows
//     {
//         for(int col=0;col<n;col++)//traversing columns
//         {
//             if(board[row][col]==0)//checking cell empty or not
//             {
//                 for(int val=1;val<=9;val++)//for values taking
//                 {
//                     if(isSafe(board,row,col,val))
//                     {
//                         board[row][col]=val; //placing the correct value
                        
//                         //recurssion
//                         bool nextPossibleSolution=solve(board);
//                         if(nextPossibleSolution) return true;
//                         else board[row][col]=0; //backtracking
                        
//                     }
//                 }
//                 return false;
//             }
//         }

//     }

//     return true;
// }
// void solveSudoku(vector<vector<int>>& sudoku)
// {
// 	solve(sudoku);
// }