#include<bits/stdc++.h>
using namespace std;
// MAXIMUM PRODUCT SUBARRAY 
vector<vector<int>>findSubs(vector<int>&arr){
    vector<vector<int>>subarrays;
    for(int i=0;i<(int)arr.size();i++){
        vector<int>temp;
        for(int j=0;j<arr.size();j++){
            temp.push_back(arr[j]);
            subarrays.push_back(temp);
        }
    }
    return subarrays;
}
int findMax(vector<vector<int>>arr){
    int maxProduct=INT_MIN;
    for(int i=0;i<arr.size();i++){
        vector<int>temp=arr[i];
        int product = 1;
        for(int j=0;j<temp.size();j++){
            product*=temp[j];
        }
        maxProduct=max(maxProduct,product);
    }
    return maxProduct;

}
int maxProduct(vector<int>&arr){
    vector<vector<int>>subarrays=findSubs(arr);
    int maxProduct = findMax(subarrays);
    return maxProduct;
}