#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

int main(){
    short int N;
    cin >> N;

    vector<int> X(N);
    for (short int i = 0; i < N; i++){
        cin >> X[i];
    }

    int max = X[0];
    int min = X[0];
    for (short int i = 0; i < X.size(); i++){
        if (X[i] < min){
            min = X[i];
        } if (X[i] > max){
            max = X[i];
        }
    }

    for (short int i = 0; i < X.size(); i++){
        if (X[i] == min){
            X[i] = max;
        } else if (X[i] == max){
            X[i] = min;
        } cout << X[i] << " ";
    }
    return 0;
}