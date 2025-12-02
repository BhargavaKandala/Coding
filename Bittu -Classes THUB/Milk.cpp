#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int c1, a1,c2, a2, c3, a3;
    cin >> c1 >> a1 >> c2 >> a2 >> c3 >> a3;
    int ops = 100;

    vector<int>M = {a1,a2,a3}; //Milks
    vector<int>C = {c1,c2,c3}; //Caps

    for(int i = 0; i < ops; i++){
        int from = i % 3;
        int to = (i + 1) % 3;

        int space = C[to] - M[to];
        int pour = min(space, M[from]);
        
        M[from] -= pour;
        M[to] += pour;

    }
}