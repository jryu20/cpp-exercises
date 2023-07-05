

/* PIC 10B, Final Exam - Part 2
Problem 1: Combination
Author: Jun Ryu
Date: 12/10/2021
*/


#include <iostream>
#include <vector>
using namespace std;
 
void buildCombos(vector<vector<int>>& answer, vector<int> temp, int start, int n, int k) {
    if (temp.size() == k) {
        answer.push_back(temp);
        return;
    }
    else {
        for (int i = start; i <= n; i++) {
            temp.push_back(i);
            buildCombos(answer, temp, i + 1, n, k);
            temp.pop_back();
        }
    }
}

vector<vector<int>> combinations(int n, int k) {
    vector<vector<int>> answer;
    vector<int> temp;
    buildCombos(answer, temp, 1, n, k);
    return answer;
}
