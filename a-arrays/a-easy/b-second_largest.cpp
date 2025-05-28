#include<bits/stdc++.h>
using namespace std;
// SECOND LARGEST ELEMENT IN ARRAY method 1 
int findSecondLargest(vector<int>&arr){
    if(arr.size()==1){
        return arr[0];
    }
    sort(arr.begin(),arr.end());
    return arr[arr.size()-2];
}
// SECOND LARGEST ELEMENT IN ARRAY method 2 
int findSecondLargest2(vector<int>&arr){
    int largest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        largest=max(largest,INT_MIN);
    }
    int secondLargest=INT_MIN;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        if(element!=largest){
            secondLargest=max(secondLargest,element);
        }
    }
    return secondLargest;
}