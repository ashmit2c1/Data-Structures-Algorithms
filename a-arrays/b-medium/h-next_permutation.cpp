#include <bits/stdc++.h>
using namespace std;
/*
void generate(int start, int end, vector<vector<int>>& perms, vector<int>& copy) {
    if (start == end) {
        perms.push_back(copy);
        return;
    }
    for (int i = start; i <= end; i++) {
        swap(copy[start], copy[i]);
        generate(start + 1, end, perms, copy);
        swap(copy[start], copy[i]); // backtrack
    }
}

void nextPermutation(vector<int>& arr) {
    vector<int> copy = arr;
    vector<vector<int>> perms;

    generate(0, arr.size() - 1, perms, copy);
    sort(perms.begin(), perms.end()); 

    for (int i = 0; i < perms.size(); i++) {
        if (perms[i] == arr) {
            if (i == perms.size() - 1)
                arr = perms[0];
            else
                arr = perms[i + 1];
            break;
        }
    }
}*/
// OPTIMISED VERSION 
void nextPermutation(vector<int>& arr) {
    int index = -1;
    int element = -1;
    for (int i = arr.size() - 1; i > 0; i--) {
        if (arr[i - 1] < arr[i]) {
            index = i - 1;
            element = arr[i - 1];
            break;
        }
    }
    if (index == -1) {
        sort(arr.begin(), arr.end());
        return;
    }

    int replace = 0;
    int replaceindex = 0;
    for (int i = arr.size() - 1; i > index; i--) {
        if (arr[i] > element) {
            replace = arr[i];
            replaceindex = i;
            break;
        }
    }

    swap(arr[index], arr[replaceindex]);
    reverse(arr.begin() + index + 1, arr.end());
}