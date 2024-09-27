#include<iostream>
#include<vector>

using namespace std;

int numberOfFlips(int a, int b)
{
    // Write your code here.

    int ans = a ^ b;
    int count = 0;
    for (int i=0; i<=31; i++) {
        // left shift
        if (ans & (1<<i)) count++;
    }
    return count;
}