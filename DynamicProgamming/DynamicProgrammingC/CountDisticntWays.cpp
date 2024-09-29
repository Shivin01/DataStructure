#include <iostream> 

using namespace std;

int MOD = 1e9 + 7;

int countDistinctWays(int nStairs) {
    int prev2 = 1;
    int prev = 1;

    for(int i = 2; i<=nStairs; i++) {
        int curr_i = (prev2 + prev) % MOD;
        prev2 = prev;
        prev = curr_i;
    }
    return prev % MOD;
}