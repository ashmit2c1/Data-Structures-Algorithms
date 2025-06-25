#include<bits/stdc++.h>
using namespace std;
// SEARCH IN A ROTATED SORTED ARRAY 
int search(vector<int>&arr,int target){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if (arr[start] == arr[mid] && arr[mid] == arr[end]) {
            start++;
            end--;
        }
        if(arr[mid]>=arr[start]){
            if(target>=arr[start] && target<arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(target>arr[mid] && target<=arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}
// BOOL VERSION OF THE PROBLEM WHEN HAVING DUPLICATES
    bool searchInARotatedSortedArrayII(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return true;
            }

            if (arr[start] == arr[mid] && arr[mid] == arr[end]) {
                start++;
                end--;
            }
            else if (arr[start] <= arr[mid]) {
                if (target >= arr[start] && target < arr[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else {
                if (target > arr[mid] && target <= arr[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        
        return false; 
    }