#include<iostream>
#include<map>
#include<vector>

using namespace std;

void freq() {

    int n = 10;
    vector<int> numbers;

    for (int j=0; j<9; j++) {
        numbers.push_back(j);
    }
    numbers.push_back(5);
    map<int, int> mpp;

    for(int i=0; i<n; i++) {
        mpp[numbers[i]]++;
    }

    int max = 0;
    int c = 0;
    for (auto x: mpp) {
        int count = x.second;
        int element = x.first;

        if (max < x.second) {
            max = x.second;
            c = x.first;
        }
    }
    cout << "Highest Freq " << c;
}

int main() {
    freq();
}
