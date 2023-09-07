//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
   
bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] != b[1] ? a[1] < b[1] : a[2] < b[2];
    }
    int maxMeetings(int start[], int end[], int n) {
        vector<vector<int>> temp;

        for (int i = 0; i < n; i++) {
            temp.push_back({start[i], end[i], i});
        }

        sort(temp.begin(), temp.end(), cmp);
        int count = 1; // At least one meeting can be held
        int ub = temp[0][1];
        for (int i = 1; i < n; i++) {
            if (temp[i][0] > ub) {
                ub = temp[i][1];
                count++;
            }
        }
        return count;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
