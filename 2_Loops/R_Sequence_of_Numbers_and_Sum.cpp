#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

int main(){
    short int N, M;
    short int max, min;
    while (true){
        cin >> N >> M; short int SUM=0;
        if (N <= 0 || M <= 0){
            return 0;
        }
        if (N > M){
            max = N;
            min = M;
        } else {
            max = M;
            min = N;
        }
        for (short int i = min; i <= max; i++){
            cout << i << " ";
            SUM += i;
        } cout << "sum =" << SUM << "\n";
    }
}