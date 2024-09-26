#include<iostream>
#include<vector>

using namespace std;

int f(int n, vector<int> &dp) {

    if (n<=1) return n;
    if (dp[n] != -1) return dp[n];

    return dp[n] = f(n-1, dp) + f(n-2, dp);
}

int main() {

    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    // Memorization
    cout << f(n, dp);
    cout << endl;
    int prev = 1;
    int prev2 = 0;

    int i = 2;
    
    while (i<=n) {
        int temp = prev + prev2;
        prev2 = prev;
        prev = temp;
        i++;
    }

    cout << prev;


    return 0;
}