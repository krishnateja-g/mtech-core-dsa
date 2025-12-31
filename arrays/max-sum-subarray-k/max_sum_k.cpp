#include <bits/stdc++.h>
using namespace std;

/*
 Find maximum sum of subarray of size k.
*/

int maxSumSubarray(vector<int>& nums, int k) {
    int windowSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        windowSum += nums[i];
        if (i >= k - 1) {
            maxSum = max(maxSum, windowSum);
            windowSum -= nums[i - k + 1];
        }
    }
    return maxSum;
}

int main() {
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << maxSumSubarray(nums, k) << endl;
    return 0;
}

