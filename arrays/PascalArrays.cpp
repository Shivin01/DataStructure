#include<iostream>
#include<vector>

using namespace std;

vector<int> generateRow(int n) {
    vector<int> temp;
    int ans = 1;
    temp.push_back(ans);
    for(int i = 1; i<n; i++) {
        ans = ans * (n-i);
        ans = ans / i;
        temp.push_back(ans);
    }
    return temp;
}

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.

    vector<vector<int>> ans;

    for (int i=1; i<=N; i++) {
        ans.push_back(generateRow(i));
    }
    return ans;
}