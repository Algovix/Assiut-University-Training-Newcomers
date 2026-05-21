#include <iostream>
using namespace std;

// Prblem_Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

int main(){
    short int N, T; long long F=1;
    cin >> T;
    for (short int i = 0; i < T; i++){
        cin >> N;
        for (short int j = 1; j <= N; j++){
                F *= j;
            } cout << F << "\n"; F=1;
        }
    return 0;
}