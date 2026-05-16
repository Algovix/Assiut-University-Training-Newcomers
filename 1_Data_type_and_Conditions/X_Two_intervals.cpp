#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

int main(){
    long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 >= l2 && l1 <= r2){
        
        if (l1 >= l2){
            cout << l1 << " ";
        } else {
            cout << l2 << " ";
        }

        if (r1 <= r2){
            cout << r1;
        } else {
            cout << r2;
        }

    } else {
        cout << -1;
    }

    return 0;
}