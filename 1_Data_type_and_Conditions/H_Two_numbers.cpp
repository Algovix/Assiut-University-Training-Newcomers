#include<iostream>
#include <cmath>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

using namespace std;
int main(){
    double A, B;
    cin >> A >> B;
    cout << "floor " << A << " / " << B << " = " << floor(A/B) << "\n";
    cout << "ceil " << A << " / " << B << " = " << ceil(A/B) << "\n";
    cout << "round " << A << " / " << B << " = " << round(A/B) << "\n"; 

    return 0;
}