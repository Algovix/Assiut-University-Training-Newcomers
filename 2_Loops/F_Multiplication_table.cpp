#include <iostream>
using namespace std;

// Prblem_Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

int main(){
    short int N;
    cin >> N;
    for (int i = 1; i <= 12; i++){
        cout << N << " * " << i << " = " << N*i << "\n";
    }
    return 0;
}