#include <bits/stdc++.h> 

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0;
	for (int j=0; j<n;j++) {
		if (arr[i] != arr[j]) {
			arr[i+1] = arr[j];
			i++;
		}
	}
	return i+1;
}