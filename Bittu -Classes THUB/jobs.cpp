#include<iostream>
#include <bits/stdc++.h>
#include <vector>

bool com(const pair<int,int>&a, const pair<int, int>&b){
    return a.second > b.second;
}
using namespace std;

int main(){
    int n;
    cin >> n;
    int startTime, endTime;
    vector<pair<int, int>> activities;
    for(int i = 0; i < n; i++){
        cin >> startTime >> endTime;
        activities.push_back({startTime, endTime});
    }

    // sort(activities.begin(), activities.end(),com);
}