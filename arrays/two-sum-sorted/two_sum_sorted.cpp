#include <bits/stdc++.h>
using namespace std;

/*
 Two Sum in a sorted array using two pointers.
 Time: O(n)
 Space: O(1)
*/

vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target)
            return {left + 1, right + 1};
        else if (sum < target)
            left++;
        else
            right--;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    auto res = twoSum(nums, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}

