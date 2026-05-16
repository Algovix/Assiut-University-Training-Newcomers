#include <iostream>
#include<iomanip>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

int main(){
    float N;
    cin >> N;
    cout << fixed << setprecision(3);
    if ((int) N - N != 0){
        cout << "float" << " " << (int) N << " " << N - ((int) N);
    } else {
        cout << "int" << " " << (int) N;
    }
    return 0;
}