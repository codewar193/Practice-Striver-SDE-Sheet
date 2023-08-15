class Solution {
public:
    //Time Complexity: O(N*logN) + O(2*N), where N = the size of the given array.
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){

            int start = intervals[i][0];
            int end = intervals[i][1];

            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }

            for(int j= i+1;j<n;j++){
                
                if(intervals[j][0] <= end){
                    end=max(end,intervals[j][1]);
                }
                 else{
                     break;
                 }
            }

            ans.push_back({start,end});
        }

        return ans;
    }
};





//approch-2-optimal

#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &intervals){
	// Write your code here.
	//Time Complexity: O(N*logN) + O(N), where N = the size of the given array.
	     int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
             

			 if(ans.empty() || intervals[i][0]>ans.back()[1]){
				 ans.push_back(intervals[i]);
			 }
           
			else{
				ans.back()[1] = max(ans.back()[1],intervals[i][1]);
			}
        }

        return ans;
}
