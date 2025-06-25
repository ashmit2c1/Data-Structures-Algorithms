#include<bits/stdc++.h>
using namespace std;
// FIND THE MINIMUM ELEMENT IN ROTATED SORTED ARRAY 
class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        int ans = INT_MAX;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[low] <= arr[mid]) {
                ans = min(ans, arr[low]);
                low = mid + 1;
            } else {
                ans = min(ans, arr[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};
// FIND THE MAX ELEMENT IN ROTATED SORTED ARRAY 
class Solution {
public:
    int findMax(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int maxElement = nums[0];

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[low] <= nums[mid]) {
                maxElement = max(maxElement, nums[mid]);
                low = mid + 1;
            } else {
                maxElement = max(maxElement, nums[mid]);
                high = mid - 1;
            }
        }
        return maxElement;
    }
};