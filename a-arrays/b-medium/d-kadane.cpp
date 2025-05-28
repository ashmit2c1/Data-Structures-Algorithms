#include<bits/stdc++.h>
using namespace std;
// MAXIMUM SUBARRAY SUM method 1 
vector<vector<int>>findsubarrays(vector<int>&arr){
    vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        vector<int>temp;
        for(int j=0;j<arr.size();j++){
            temp.push_back(arr[j]);
            ans.push_back(temp);
        }
    }
    return ans;
}
int findSum(vector<vector<int>>&subarrays){
    int sum=0;
    for(int i=0;i<subarrays.size();i++){
        vector<int>temp=subarrays[i];
        int tot=0;
        for(int j=0;j<temp.size();j++){
            tot+=temp[j];
        }
        sum=max(sum,tot);
    }
    return sum;
}
int maxSum(vector<int>&arr){
    vector<vector<int>>subarrays=findsubarrays(arr);
    int findmaxSum=findSum(subarrays);
    return findmaxSum;
}
// MAXIMUM SUBARRAY SUM USING KADANE ALGORITHM
int maxSum(vector<int>&arr){
    int maxSoFar=0;
    int maxHere=0;
    for(int i=0;i<arr.size();i++){
        maxHere+=arr[i];
        if(maxHere<arr[i]){
            maxHere=arr[i];
        }
        maxSoFar=max(maxSoFar,maxHere);
    }
    return maxSoFar;
}