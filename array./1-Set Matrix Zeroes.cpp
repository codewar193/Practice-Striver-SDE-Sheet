

//Brute Force Approach .TC:O((N*M)*(N + M)) + O(N*M)
/*class Solution {
    void makeRow(int i,int n,vector<vector<int>> &matrix){
         for(int j =0;j<n;j++){
             if(matrix[i][j]!=0){
                matrix[i][j]=-1; 
             }
         }
    }
     void makeCol(int j,int n,vector<vector<int>> &matrix){

         for(int i =0;i<n;i++){
             if(matrix[i][j]!=0){
                matrix[i][j]=-1; 
             }
         }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();


        for(int i = 0;i<row;i++){
            for(int j =0;j<col;j++){
                if(matrix[i][j]==0){
                    makeRow(i,col,matrix);
                    makeCol(j,row,matrix);
                }
            }
        }

          for(int i = 0;i<row;i++){
            for(int j =0;j<col;j++){
                if(matrix[i][j]==-1){
                  matrix[i][j]=0;
                }
            }
        }
    }
};*/


// Approch Set Matrix Zeros[time complexity:O(n*n)]
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.

	int col[m] = {0};
	int row[n] = {0};


	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){

			if(matrix[i][j]==0){
				row[i] = 1;
				col[j]= 1;
			}
		}
	}
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){

			if(row[i]==1 || col[j]==1){
				matrix[i][j] =0;
				
			}
		}
	}
return matrix;

}
