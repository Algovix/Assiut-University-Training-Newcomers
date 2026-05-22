#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

int main(){
    short int N;
    cin >> N;
    for (short int i = 1; i <= N; i++){
        if (N%i==0){
            cout << i << "\n";
        }
    }
    return 0;
}