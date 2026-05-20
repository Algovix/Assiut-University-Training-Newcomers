#include <iostream>
#include <cmath>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

int main(){
    double A, B, C, D;
    cin >> A >> B >> C >> D;
    if (B*log(A) > D*log(C)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    // This problem cannot be solved in the usual way due to the overflow, 
    // and the ingenious solution is to use logarithms to decompose the astronomical numbers.
    return 0;
}