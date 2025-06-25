#include<bits/stdc++.h>
using namespace std;
// IMPLEMENT UPPER BOUND FUNCTION 
int upperBound(int target,vector<int>&arr){
    int index = upper_bound(arr.begin(),arr.end(),target)-arr.begin();
    return index;
}
// IMPLEMENT UPPER BOUND USING BINARY SEARCH
int upperBound(int target,vector<int>&arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return start;
}