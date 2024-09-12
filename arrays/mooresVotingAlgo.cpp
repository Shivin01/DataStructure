#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int count = 0;
	int el;

	for (int i =0; i<n;i++) {

		if (count == 0) {
			count = 1;
			el = arr[i];
		} else if (arr[i] == el) {
			count++;
		} else {
			count--;
		}
	}

	int count1 = 0;
	for (int i=0; i<n; i++) {
		if(arr[i] == el) {
			count1++;
		}
	}
	if(count1 > (n/2)) {
		return el;
	} else {
		return -1;
	}
}
