#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

int main(){
    short int N;
    cin >> N;
    for (short int R=N;R>0;R--){
        for (short int j=R;j>0;j--){
            cout << "*";
        } cout << "\n";
    }
    return 0;
}