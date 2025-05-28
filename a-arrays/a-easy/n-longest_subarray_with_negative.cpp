#include<bits/stdc++.h>
using namespace std;
// FIND THE LONGEST SUBARRAY WITH THE SUM K method 1 
vector<vector<int>>findSubarrays(vector<int>&arr){
    vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        vector<int>temp;
        for(int j=i;j<arr.size();j++){
            temp.push_back(arr[j]);
            ans.push_back(temp);
        }
    }
    return ans;
}
void pushLen(vector<vector<int>>&subarrays,int sum,vector<int>&lens){
    for(int i=0;i<subarrays.size();i++){
        vector<int>temp=subarrays[i];
        int tot=0;
        for(int i=0;i<temp.size();i++){
            tot+=temp[i];
        }
        if(tot==sum){
            lens.push_back(temp.size());
        }
    }
}
int findLongestSubarray(vector<int>&arr,int sum){
    vector<vector<int>>subarrays=findSubarrays(arr);
    vector<int>lens;
    pushLen(subarrays,sum,lens);
    sort(lens.begin(),lens.end());
    return lens[lens.size()-1];
}
// FIND THE LONGEST SUBARRAY WITH THE SUM K method 2 array has negative elements
int findLongestSubarray(vector<int>&arr,int sum){
    unordered_map<int,int>mp;
    int currentSum=0;
    int maxlen=0;
    for(int i=0;i<arr.size();i++){
        currentSum+=arr[i];
        if(currentSum==sum){
            maxlen=max(maxlen,i+1);
        }
        if(mp.find(currentSum-sum)!=mp.end()){
            maxlen=max(maxlen,i-mp[currentSum-sum]);
        }
        if(mp.find(currentSum)==mp.end()){
            mp[currentSum]=i;
        }
    }
    return maxlen;
}