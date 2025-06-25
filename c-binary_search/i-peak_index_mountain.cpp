#include<bits/stdc++.h>
using namespace std;
// FIND THE PEAK INDEX IN MOUNTAIN ARRAY 
int findPeakIndex(vector<int>&arr){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            return mid;
        }
        if(arr[mid] > arr[mid-1]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}
