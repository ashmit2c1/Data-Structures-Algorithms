#include<bits/stdc++.h>
using namespace std;
// GIVEN A PASCAL TRIANGLE GET THE ENTIRE TREE 
class Solution {
public:
    vector<int>getRow(int r){
        vector<int>ans;
        long long current = 1 ;
        ans.push_back(current);
        for(int i=1;i<r;i++){
            current*=(r-i);
            current/=i;
            ans.push_back(current);
        }
        return ans;
    }
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=2;i<=n;i++){
            vector<int>row = getRow(i);
            ans.push_back(row);
        }
        return ans;
    }
};