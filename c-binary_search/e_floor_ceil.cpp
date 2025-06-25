#include<bits/stdc++.h>
using namespace std;
// GIVEN AN ARRAY FIND THE FLOOR AND CEIL OF THE GIVEN ELEMENT FROM THE ARRAY 
vector<int>floorCeil(int target,vector<int>&arr){
    vector<int>ans;
    int floor=-1;
    int ceil=-1;
    auto upper = upper_bound(arr.begin(),arr.end(),target);
    if(upper==arr.begin()){
        ans.push_back(-1);
    }else{
        upper--;
        ans.push_back(*upper);
    }
    auto lower = lower_bound(arr.begin(),arr.end(),target);
    if(lower==arr.end()){
        ans.push_back(-1);
    }else{
        ans.push_back(*lower);
    }
    return ans;
}