#include<bits/stdc++.h>
using namespace std;
// FIND OUT IF AN ARRAY WAS ROTATED AND SORTED 
bool check(vector<int>&arr){
    int drop=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[(i+1)]){
            drop++;
        }
    }
        if (arr[arr.size() - 1] > arr[0]) {
            drop++;
        }
    if(drop<=1){
        return true;
    }
    return false;
}
// FIND OUT HOW MANY TIMES AN ARRAY WAS ROTATED
int findKRotation(vector<int>&arr){
    bool ans=check(arr);
    if(ans==false){
        return 0;
    }
    int min=INT_MAX;
    int index=-1;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        if(element<min){
            min=element;
            index=i;
        }
    }
    return index;
}