class Solution {
public:
    int findDuplicate(vector<int>& arr) {

        //Approch - 1
        /*
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++ ){
            for(int j =i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    return nums[i];
                }
            }
        }
        return -1;
        */

	//Tc: O(n)
    int slow = arr[0];
	int fast = arr[0];

	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
		
	} while(slow != fast);

	 fast = arr[0];

	while(slow != fast){
		slow = arr[slow];
		fast = arr[fast];
	}

	return slow;


    }
};
