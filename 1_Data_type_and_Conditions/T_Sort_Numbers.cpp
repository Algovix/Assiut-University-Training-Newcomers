#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if (A <= B && A <= C){
        if (B >= C){
            cout << A << "\n" << C << "\n" << B << "\n";
        } else {  
            cout << A << "\n" << B << "\n" << C << "\n";
        }
    } else if (A >= B && A >= C){
        if (B >= C){
            cout << C << "\n" << B << "\n" << A << "\n";
        } else {
            cout << B << "\n" << C << "\n" << A << "\n";
        }
    } else if (A >= B && A <= C){
        cout << B << "\n" << A << "\n" << C << "\n";
    } else if (A <= B && A >= C){
        // C A B
        cout << C << "\n" << A << "\n" << B << "\n";
    }
    
    cout << "\n" << A << "\n" << B << "\n" << C;
    return 0;
}