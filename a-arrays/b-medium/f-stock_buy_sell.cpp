#include<bits/stdc++.h>
using namespace std;
// BEST TIME TO BUY AND SELL STOCK 
int bestTime(vector<int>&arr){
    int minprice=arr[0];
    int maxprofit = INT_MIN;
    for(int i=0;i<arr.size();i++){
        int profit = arr[i]-minprice;
        maxprofit = max(maxprofit,profit);
        minprice=min(minprice,arr[i]);
    }
    if(maxprofit<=0){
        return 0;
    }
    return maxprofit;
}