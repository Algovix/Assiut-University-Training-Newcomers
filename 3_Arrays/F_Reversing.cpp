#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int j = A.size()-1; j >= 0; j--){
        cout << A[j] << " ";
    }
    return 0;
}