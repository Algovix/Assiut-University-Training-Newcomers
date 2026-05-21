#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

int main(){
    short int A,B,GCD=0;
    cin >> A >> B;
    for (short int i = 1; i <= A && i <= B; i++){
        if (A%i==0 && B%i==0){
            if (i > GCD){
                GCD = i;
            }
        }
    } cout << GCD;
    return 0;
}