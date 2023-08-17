#include<vector>
/*
Time Complexity: O(min(n, m)) + O(n*logn) + O(m*logm), where n and m are the sizes of the given arrays.
Reason: O(min(n, m)) is for swapping the array elements. And O(n*logn) and O(m*logm) are for sorting the two arrays.

Space Complexity: O(1) as we are not using any extra space.*/

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	int n = a.size();
	int m = b.size();

	int i = n-1;
	int j =0;

	while(i>=0  && j<m){
		if(a[i]>b[j]){
			swap(a[i],b[j]);
			i--;
			j++;
		}else{
			break;
		}
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
}

class Solution {
public:
/*
Time Complexity: O(min(n, m)) + O(n*logn) + O(m*logm), where n and m are the sizes of the given arrays.
Reason: O(min(n, m)) is for swapping the array elements. And O(n*logn) and O(m*logm) are for sorting the two arrays.

Space Complexity: O(1) as we are not using any extra space.

*/

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int i=0,j=0;
vector<int> ans;

        while(i<m && j<n )
        {
           if(nums1[i]<nums2[j])
           {
               ans.push_back(nums1[i]);
               i++;
           }

            else
            {
               ans.push_back(nums2[j]);
        	  j++;
	        }
        }
 /* Print remaining elements of the larger array */
    while (i < m){
        ans.push_back(nums1[i]);   
        i++;
       
    }
        
 
    while (j < n){
          ans.push_back(nums2[j]);
        	  j++;
    }

//copy in nums1
       int t=0;
    while(t<(m+n)){
            nums1[t] = ans[t];
            t++;
        }
        
}
};
