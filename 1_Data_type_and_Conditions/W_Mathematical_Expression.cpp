#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

int main(){
    short int A, B, C; char Q, S;
    cin >> A >> S >> B >> Q >> C;
    switch (S)
    {
    case '+':
        if (A + B == C){
            cout << "Yes";
        } else{
            cout << A + B;
        }
        break;
    case '-':
        if (A - B == C){
            cout << "Yes";
        } else{
            cout << A - B;
        }
        break;
    case '*':
        if (A * B == C){
            cout << "Yes";
        } else{
            cout << A * B;
        }
    default:
        break;
    }
    return 0;
}