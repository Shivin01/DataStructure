#include<iostream>
#include <vector>
using namespace std;


int missingNumber(vector<int>&a, int N) {    
    int sum = (N*(N+1))/2;
    int arraySum = 0;
    for (int i=0; i<a.size(); i++) {
        arraySum += a[i];
    }

    return sum - arraySum;
}