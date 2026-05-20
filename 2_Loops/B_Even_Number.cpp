#include <iostream>
using namespace std;

// Prblem_Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

int main(){
    short int N;
    cin >> N;
    if (N < 2){
        cout << -1;
    } else {
        for (int i = 2; i <= N; i++){
            if (i % 2 == 0){
                cout << i << "\n";
            }
        }
    }
    return 0;
}