#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = arr[0];
    for (int i =0; i<n;i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }
    int j=0;
    int secondLargest = -1;
    while (largest == arr[j]) {
        j++;
    }
    if (j != n) {
        secondLargest = arr[j];
    }

    for (int i =0; i<n; i++) {
        if (secondLargest < arr[i] && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
