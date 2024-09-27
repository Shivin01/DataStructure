// #inclue<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int BS(int n, int low, int high) {

    long long mid = (low+high)/2;

    if (low <= high) {
        if (mid * mid <= n) {
            low = mid + 1;
            return BS(n, low, high);            
        } else {
            high = mid - 1;
            return BS(n, low, high);
        }
    }
    return high;
}

int floorSqrt(int n)
{
    int low = 1;
    int high = n;
    return BS(n, low, high);
}