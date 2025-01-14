#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Job {
    int id;
    int deadline;
    int profit;
};


bool comparision(Job a, Job b) {
    return a.profit > b.profit;
}

pair<int, int> JobSchedulingAlgo(vector<Job> &jobs) {

    sort(jobs.begin(), jobs.end(), comparision);

    int max_deadline = 0;
    for(auto &job: jobs) {
        max_deadline = max(max_deadline, job.deadline);
    }

    vector<int> timeLine(max_deadline+1, -1);

    int totalProfit = 0;
    int cnt = 0;

    for(auto &job: jobs) {
        for(int slot = min(max_deadline, job.deadline); slot>0; slot--) {
            if(timeLine[slot] == -1) {
                timeLine[slot]=job.id;
                cnt++;
                totalProfit += job.profit;
                break;
            }
        }
    }

    return {totalProfit, cnt};
}

vector<int> jobScheduling(vector<vector<int>> &jobs)
{   
    vector<int> result;
    vector<Job> jobList;
    for (int i = 0; i < jobs.size(); i++) {
        jobList.push_back({jobs[i][0], jobs[i][1], jobs[i][2]});
    }
    pair<int, int> jobResult = JobSchedulingAlgo(jobList);
    result.push_back(jobResult.second);
    result.push_back(jobResult.first);
    return result;
}
