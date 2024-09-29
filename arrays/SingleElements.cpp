#include<iostream>
#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr){

	int xorr = 0;

	if (arr.size() == 1) {
		return arr[0];
	}
	
	for (long long int i=0; i<arr.size(); i=i+2) {
		xorr = arr[i+1] ^ arr[i];
		if (xorr != 0) {
			return arr[i];
		}
	}
}
