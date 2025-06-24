#include<bits/stdc++.h>
using namespace std;
// COUNT THE NUMBER OF INVERSION IN AN ARRAY 
int countFunction(int left,int mid,int right,vector<int>&arr){
    vector<int>leftsub(arr.begin()+left,arr.begin()+mid+1);
    vector<int>rightsub(arr.begin()+mid+1,arr.begin()+right+1);
    int i=0;int j=0;int k=left;int ans=0;
    while(i<leftsub.size() && j<rightsub.size()){
        if(leftsub[i]<=rightsub[j]){
            arr[k++]=leftsub[i++];
        }else{
            arr[k++]=rightsub[j++];
            ans+=leftsub.size()-i;
        }
    }
    while(i<leftsub.size()){
        arr[k++]=leftsub[i++];
    }
    while(j<rightsub.size()){
        arr[k++]=rightsub[j++];
    }
    return ans;
}
int mergeFunction(int left,int right,vector<int>&arr){
    int ans=0;
    if(left<right){
        int mid = left+(right-left)/2;
        ans+=mergeFunction(left,mid,arr);
        ans+=mergeFunction(mid+1,right,arr);
        ans+=countFunction(left,mid,right,arr);
    }
    return ans;
}
int countInversion(vector<int>&arr){
    int ans=mergeFunction(0,arr.size()-1,arr);
    return ans;
}