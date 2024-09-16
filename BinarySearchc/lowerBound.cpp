// #inclue<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int lowerBound(vector<int>&arr, int target) {
    int low =0, high = arr.size()-1;
    int ans = arr.size()-1;

    while(low<=high) {
        int mid = (low+high )/2;
        if(arr[mid] >= target) {
            ans = mid;
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }
    return ans;

}

int main() {
    vector<int> temp;
    int j = 0;
    while (j < 100) {
        temp.push_back(j);
        j = j + 10;
    }
    int ans;
    ans = lowerBound(temp, 7);
    cout << ans;
}
