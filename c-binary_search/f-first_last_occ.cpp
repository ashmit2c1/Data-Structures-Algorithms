#include<bits/stdc++.h>
using namespace std;
// FIND THE FIRST AND LAST OCCURENCE OF AN ELEMENT 
vector<int> searchRange(vector<int> &arr, int target) {
    vector<int>ans;
    int first=-1;
    int second=-1;
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        if(target>arr[mid]){
            start=mid+1;
        }if(target<arr[mid]){
            end=mid-1;
        }
    }
    start=0;
    end=arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            second=mid;
            start=mid+1;
        }
        if(target>arr[mid]){
            start=mid+1;
        }
        if(target<arr[mid]){
            end=mid-1;
        }
    }
    ans.push_back(first);ans.push_back(second);
    return ans;
}