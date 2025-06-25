#include<bits/stdc++.h>
using namespace std;
// SEARCH X IN SORTED ARRAY
int search(int x,vector<int>&arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(x==arr[mid]){
            return mid;
        }
        if(x>arr[mid]){
            start=mid+1;
        }
        if(x<arr[mid]){
            end=mid-1;
        }
    }
    return -1;
}