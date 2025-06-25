#include<bits/stdc++.h>
using namespace std;
// GIVEN AN ELEMENT, FIND THE POSITION THAT IT IS PRESENT AT, IF NOT FIND THE POSITION THAT IT SHOULD BE PLACED IN 
int searchPosition(int element,vector<int>&arr){
    int start = 0;
    int end = arr.size()-1;
    int ans=arr.size();
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]>=element){
            ans = mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}