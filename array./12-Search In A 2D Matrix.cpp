bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int low=0;
        int n = mat.size();
        int m = mat[0].size();
        int high = m*n -1;
        
     while(low<=high){

         int mid = (low+high)/2;
         int row = mid/m;
         int col = mid%m;

         if(mat[row][col]== target )return true;
         else if (mat[row][col] < target){
             low = mid+1;
         }
         else {
             high = mid-1;
         }
     }

  return false;
}
