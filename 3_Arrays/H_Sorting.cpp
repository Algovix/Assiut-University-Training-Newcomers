#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < A.size(); i++){
        for (int j = 1; j < A.size(); j++){
            int temp = A[j-1];
            if (A[j] < temp){
                A[j-1] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int k = 0; k < A.size(); k++){
        cout << A[k] << " ";
    }

    return 0;
}