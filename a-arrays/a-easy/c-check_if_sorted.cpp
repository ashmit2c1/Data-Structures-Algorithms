#include<bits/stdc++.h>
using namespace std;
// CHECK IF THE GIVEN ARRAY IS SORTED OR NOT 
bool check(vector<int>&arr){
    if(arr.size()==1){
        return true;
    }
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}