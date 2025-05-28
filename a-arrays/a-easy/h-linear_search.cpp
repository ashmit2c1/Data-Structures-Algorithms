#include<bits/stdc++.h>
using namespace std;
// SEARCH IN SORTED ARRAY method 1 
int findElement(vector<int>&arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
// SEARCH IN SORTED ARRAY method 2 
int findElement2(vector<int>&arr,int target){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}