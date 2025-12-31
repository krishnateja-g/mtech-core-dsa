#include <bits/stdc++.h>
using namespace std;

/*
 Problem: Range Sum Query
 Precompute prefix sums to answer queries in O(1).
*/

class NumArray {
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) return prefix[right];
        return prefix[right] - prefix[left - 1];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray obj(nums);
    cout << obj.sumRange(0, 2) << endl;
    cout << obj.sumRange(2, 5) << endl;
    return 0;
}

