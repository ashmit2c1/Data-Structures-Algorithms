#include<bits/stdc++.h>
using namespace std;
// return the triplets such that the sum of all 3 triplets is 0 and the triplets must not contain duplicate values
vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                res.push_back({arr[i], arr[left], arr[right]});
                while (left < right && arr[left] == arr[left + 1]) {
                    left++;
                }
                while (left < right && arr[right] == arr[right - 1]) {
                    right--;
                }
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return res;
}
// INCASE WE NEED ALL TRIPLETS, WE CAN JUST SOLVE IT USING TWO SUM APPROACH 
vector<vector<int>>threeSum(vector<int>&arr){
    vector<vector<int>>ans;
    int target = 0;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        unordered_map<int,int>mp;
        for(int j=i+1;j<arr.size();j++){
            mp[arr[j]]=j;
        }
        for(int j=i+1;j<arr.size();j++){
            int sum = element + arr[j];
            int complement = target - sum;
            if(mp.find(complement)!=mp.end()){
                ans.push_back({arr[i],arr[j],arr[mp[complement]]});
            }
        }
    }
    return ans;
}