#include <bits/stdc++.h>
using namespace std;

/*
 Problem: Two Sum
 Given an array of integers and a target value,
 return indices of the two numbers such that they add up to the target.

 Approach:
 Use a hash map to store previously seen elements.
 For each element x, check if (target - x) exists.

 Time Complexity: O(n)
 Space Complexity: O(n)
*/

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> indexMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (indexMap.find(complement) != indexMap.end()) {
            return {indexMap[complement], i};
        }

        indexMap[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}

