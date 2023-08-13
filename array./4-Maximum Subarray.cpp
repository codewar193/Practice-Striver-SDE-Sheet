class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Brute Force solution: Time Complexity ~ O(n^3) approch-1 Time Limit Exceeded
        /*
        int n = nums.size();
        int ans = INT_MIN;
        for(int i =0;i<n;i++){
            for(int j =i;j<n;j++){
              int sum =0;
              for(int k =i;k<=j;k++){
                   sum+=nums[k];
              }
                ans= max(ans,sum);
            }
          
        }

        return ans;
        */
 //Approch:2 Time Complexity =O(n^2) Time Limit Exceeded
     /*
       int n = nums.size();
        int ans = INT_MIN;
        for(int i =0;i<n;i++){
                int sum =0;
            for(int j =i;j<n;j++){
               sum+=nums[j];
               ans= max(ans,sum);
            } 
        }
        return ans;
    */
  //Approch-3 Time complexity:T(n) 
    int n = nums.size();
    int ans = nums[0];  // Initialize ans with the first element of the array.
    int sum = nums[0];  // Initialize sum with the first element of the array.

    for(int i = 1; i < n; i++) {
        sum = max(nums[i], sum + nums[i]);  
        ans = max(ans, sum); 
    }

    return ans;
}
};
