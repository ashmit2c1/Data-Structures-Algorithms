#include<bits/stdc++.h>
using namespace std;
// MAJORITY ELEMENT 
int majorityElement(vector<int>&arr){
    int count=0;
    int element=0;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            element=arr[i];
            count=1;
        }
        else if(element==arr[i]){
            count++;
        }else{
            count--;
        }
    }
    count=0;
    for(int i=0;i<arr.size();i++){
        if(element==arr[i]){
            count++;
        }
    }
    if(count>arr.size()/2){
        return element;
    }else{
        return -1;
    }
}