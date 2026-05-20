#include <iostream>
using namespace std;

// Prblem_Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

int main(){
    short int N; int X;
    short int E = 0, O = 0, Pos = 0, Neg = 0;
    cin >> N;
    for (short int i = 0; i < N; i++){
        cin >> X;
        if (X % 2 == 0){
            E += 1;
        } else {
            O += 1;

        } if (X > 0){
            Pos += 1;
        } else if (X < 0){
            Neg += 1;
        }
    }
    cout << "Even: " << E << "\n";
    cout << "Odd: " << O << "\n";
    cout << "Positive: " << Pos << "\n";
    cout << "Negative: " << Neg;
    return 0;
}