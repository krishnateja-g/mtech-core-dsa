#include <bits/stdc++.h>
using namespace std;

/*
 Problem: Maximum Subarray
 Find the contiguous subarray with the maximum sum.

 Approach:
 Use Kadane’s Algorithm.
 Keep track of current sum and maximum sum.

 Time Complexity: O(n)
 Space Complexity: O(1)
*/

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}

