#include<bits/stdc++.h>
using namespace std;
// USING KADANE'S ALGORITHM FIND THE INDICES OF THE MAX SUM SUBARRAY 
pair<int,int>maxSubarray(vector<int>&arr){
    int currentSum=0;
    int maxSum=INT_MIN;
    int start=0;
    int end=0;
    int tempstart=0;
    for(int i=0;i<arr.size();i++){
        currentSum+=arr[i];
        if(currentSum>maxSum){
            maxSum=currentSum;
            start=tempstart;
            end=i;
        }else{
            currentSum=0;
            tempstart=i+1;
        }
    }
    return {start,end};
}