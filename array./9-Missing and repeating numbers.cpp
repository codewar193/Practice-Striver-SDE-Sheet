#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	 // Write your code here 

    sort(arr.begin(),arr.end());

    pair <int,int> ans;
    int sum =0 ;
 

    for(int i=0;i<n;i++)

    {
        if(arr[i]==arr[i+1]) ans.second = arr[i];
          sum+=arr[i];

    }
	int Total_sum = n*(n+1)/2+ans.second;
	ans.first= Total_sum - sum;

    return ans; 
	
}
