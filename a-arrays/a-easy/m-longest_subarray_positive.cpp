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
// FIND THE LONGEST SUBARRAY WITH THE SUM K method 2 ( array only has positive elements )
int findLongestSubarray(vector<int>&arr,int sum){
    int maxlen=0;
    int left=0;
    int current=0;
    for(int right=0;right<arr.size();right++){
        current+=arr[right];
        if(current>=sum){
            if(current==sum){
                maxlen=max(maxlen,right-left+1);
            }
            while(current>sum){
                current-=arr[left];
                left++;
            }
        }
    }
    return maxlen;
}