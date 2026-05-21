#include <iostream>
using namespace std;

// Prblem_Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

int main(){
    short int N;
    int X; int max = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> X;
        if (X > max){
            max = X;
        }
    } cout << max;
    return 0;
}