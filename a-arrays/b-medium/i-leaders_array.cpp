#include<bits/stdc++.h>
using namespace std;
// FIND THE LEADERS IN ARRAY 
vector<int> leaders(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
// FIND THE LEADERS IN THE ARRAY method 2
vector<int> leaders(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    int max_from_right = arr[n - 1];
    ans.push_back(max_from_right);

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}