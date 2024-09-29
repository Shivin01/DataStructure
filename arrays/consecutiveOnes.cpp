#include<iostream>
#include <vector>
using namespace std;

int consecutiveOnes(vector<int>& arr){
    
    int maxLength = 0;
    int currlenght = 0;

    for (int i=0; i<arr.size(); i++) {
        if (arr[i] == 1) {
            currlenght++;
        } else {
            if (currlenght > maxLength) {
                maxLength = currlenght;
            }
            currlenght = 0;
        }
    }
    if (currlenght > maxLength) {
        maxLength = currlenght;
    }
    return maxLength;
}