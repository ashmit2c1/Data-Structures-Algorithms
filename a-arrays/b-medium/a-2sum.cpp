#include<bits/stdc++.h>
using namespace std;
// 2 SUM PROBLEM method 1 
vector<int>twoSum(vector<int>&arr,int target){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int sum = arr[i]+arr[j];
            if(sum==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {};
}
// 2 SUM PROBLEM method 2 
vector<int>twoSum(vector<int>&arr,int target){
    unordered_map<int,int>mp;
    int current=0;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        current=arr[i];
        int complement = target-current;
        if(mp.find(complement)!=mp.end()){
            ans.push_back(i);
            ans.push_back(complement);
        }
        mp[current]=i;
    }
    return {};
}