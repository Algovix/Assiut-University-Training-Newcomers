#include <iostream>
using namespace std;

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y;
    cin >> x >> y;
    
    cout << x << " + " << y << " = " << x + y << "\n";
    cout << x << " * " << y << " = " << x * y << "\n";
    cout << x << " - " << y << " = " << x - y << "\n";

    return 0;
}
