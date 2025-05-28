#include<bits/stdc++.h>
using namespace std;
// LARGEST ELEMENT IN ARRAY method 1 
int findLargest(vector<int>&arr){
    if(arr.size()==1){
        return arr[0];
    }
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
// LARGEST ELEMENT IN ARRAY method 2 
int findLargest2(vector<int>&arr){
    if(arr.size()==1){
        return arr[0];
    }
    int largest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        largest=max(largest,element);
    }
    return largest;
}