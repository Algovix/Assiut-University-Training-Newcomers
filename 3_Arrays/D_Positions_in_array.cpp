#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int j = 0; j < A.size(); j++){
        if (A[j] <= 10){
            cout << "A[" << j << "]" << " = " << A[j] << "\n";
        }
    }
    return 0;
}