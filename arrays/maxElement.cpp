#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int maxNum = arr[0];
    for(int i=0; i<n; i++) {
        if (maxNum < arr[i]) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}
