#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> result = {};

    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        permutation(nums, nums.size());
        return result;
    }

    void permutation(std::vector<int>& arr, int n) {
        if (n < 2) {
            result.push_back(arr);
        }
        else {
            for (int i = n - 1;i >= 0;i--) {
                std::swap(arr[i], arr[n-1]);
                permutation(arr, n - 1);
                std::swap(arr[i], arr[n-1]);
            }
        }
    }
};
