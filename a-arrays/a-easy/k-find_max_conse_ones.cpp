#include<bits/stdc++.h>
using namespace std;
// FIND MAX CONSECUTIVE ONES
int findMaxConsecutiveOnes(vector<int>&arr){
    int maxones=0;
    int curr=0;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        if(element==1){
            curr++;
        }else{
            maxones=max(maxones,curr);
            curr=0;
        }
    }
    maxones=max(maxones,curr);
    return maxones;
}