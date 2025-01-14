#include<iostream>
#include <vector>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    double r1 = (double)a.second / (double)a.first;
    double r2 = (double)b.second / (double)b.first;
    return r1>r2;
}

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    
    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;
    int currentWeight = 0;

    for(auto &item: items ) {
        int itemWeight = item.first;
        int itemValue = item.second;

        if (currentWeight + itemWeight <= w) {
            totalValue += itemValue;
            currentWeight += itemWeight;
        } else {
            int remainCapacity = w - currentWeight;
            totalValue += itemValue * ( (double)remainCapacity/itemWeight );
            break;
        }        
    }

    return totalValue;
}