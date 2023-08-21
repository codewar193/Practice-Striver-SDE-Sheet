//Approch -1 O(N*logN) + O(N), where N = size of the given array.

#include <bits/stdc++.h>

int majorityElement(vector<int> v) {
	// Write your code here

	unordered_map<int,int> hash;
	int n = v.size();


	for(int i =0;i<n;i++){
		hash[v[i]]++;
	}

	for(auto it : hash){
		if(it.second > n/2){
			return it.first;
		}
	}
	return -1;
}




//Approch -2  O(N) + O(N), where N = size of the given array.
class Solution {
public:
    int majorityElement(vector<int>& nums) {

    int count=0;
    int candidate=0;
    int n = nums.size();

    // Using Moore's Voting Algorithm
    for(int num:nums)
    {
        if(count == 0)
        {
            count = 1;
            candidate=num;
        }else if(num==candidate)
        {
            count++;
        }
        else count--;
    }
    int temp =0;

    for(int num: nums){
      if(candidate == num)temp++;
    }
    if(temp > n/2)return candidate;


    return -1;
    }
};
