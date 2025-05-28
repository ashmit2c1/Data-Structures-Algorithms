#include<bits/stdc++.h>
using namespace std;
// LEFT ROTATE AN ARRAY BY D PLACES method 1 
void leftRotate(vector<int>&arr,int d){
    int n=arr.size();
    d=d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}
// LEFT ROTATE AN ARRAY BY D PLACES method 2 
void leftRotate2(vector<int>&arr,int d){
    d=d%arr.size();
    vector<int>temp(arr.size());
    int index=0;
    for(int i=d;i<arr.size();i++){
        temp[index]=arr[i];
        index++;
    }
    for(int i=0;i<d;i++){
        temp[index]=arr[i];
        index++;
    }
    index=0;
    for(int i=0;i<temp.size();i++){
        arr[index]=temp[i];
        index++;
    }
}
