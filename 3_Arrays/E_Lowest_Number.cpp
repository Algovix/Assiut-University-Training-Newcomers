#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    int min = A[0]; 
    for (int j = 0; j < A.size(); j++){
        if (A[j] < min){
            min = A[j];
        }
    }

    for (int k = 0; k < A.size(); k++){
        if (A[k] == min){
            cout << min << " " << k+1;
            break;
        } 
    }
    return 0;
}