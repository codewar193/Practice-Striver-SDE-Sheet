#include "bits/stdc++.h"

vector<int> maxSlidingWindow(vector<int> &arr, int n, int k){
    // Write your code here
   vector<int> ans;
   deque<int> dq;

   for(int i =0;i<n;i++)
   {
       if(!dq.empty() && dq.front() == i-k){
           dq.pop_front();
       }
       while(!dq.empty() && arr[dq.back()] < arr[i]){
           dq.pop_back();
       }
       dq.push_back(i);

       if(i>=k-1){
           ans.push_back(arr[dq.front()]);
       }
   }

    // for (int i = 0; i <= n-k; i++) {
    //     int maxi = arr[i];
    //     for(int j =i+1;j<i+k;j++)
    //     {
    //         maxi = max(maxi,arr[j]);
    //     }
    //     ans.push_back(maxi);
    // }

    return  ans;
}
