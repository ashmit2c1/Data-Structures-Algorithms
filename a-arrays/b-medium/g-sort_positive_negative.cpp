#include<bits/stdc++.h>
using namespace std;
// ALTERNATIVE POSITIVE NEGATIVE 
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        for(int i=0;i<nums.size();i++){
            int element = nums[i];
            if(element<0){
                negative.push_back(nums[i]);
            }else{
                positive.push_back(nums[i]);
            }
        }
        int n=nums.size();
        int index=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=positive[index];
            index++;
        }
        index=0;
        for(int i=1;i<nums.size();i+=2){
            nums[i]=negative[index];
            index++;
        }
        return nums;

    }