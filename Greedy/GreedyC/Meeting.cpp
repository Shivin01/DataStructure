#include<iostream>
#include <vector>
using namespace std;


struct meeting {
    int start;
    int end;
    int pos;
};

bool comp(meeting a, meeting b) {
    return a.end < b.end;
}

int maximumMeetings(vector<int> &start, vector<int> &end)
{
    
    int n = start.size();

    struct meeting meet[n];

    for (int i = 0; i< n; i++) {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i;
    }

    sort(meet, meet+n, comp);

    int limit = meet[0].end;
    int count = 1;

    for(int j = 0; j<n; j++) {
        if(meet[j].start > limit) {
            count++;
            limit = meet[j].end;
        }
    }

    return count;


}