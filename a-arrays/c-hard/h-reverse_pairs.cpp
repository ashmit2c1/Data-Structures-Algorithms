#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countFunction(int left, int mid, int right, vector<int>& arr) {
        int count = 0;
        int j = mid + 1;
        for (int i = left; i <= mid; i++) {
            while (j <= right && arr[i] > 2LL * arr[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        
        vector<int> temp;
        int i = left;
        j = mid + 1;
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }
        while (i <= mid) {
            temp.push_back(arr[i++]);
        }
        while (j <= right) {
            temp.push_back(arr[j++]);
        }
        for (int k = left; k <= right; k++) {
            arr[k] = temp[k - left];
        }
        return count;
    }

    int mergeFunction(int left, int right, vector<int>& arr) {
        int count = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            count += mergeFunction(left, mid, arr);
            count += mergeFunction(mid + 1, right, arr);
            count += countFunction(left, mid, right, arr);
        }
        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeFunction(0, nums.size() - 1, nums);
    }
};