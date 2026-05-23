#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

int main(){
    short int T; long N;
    cin >> T;
    for (short int i = 0; i < T; i++){
        cin >> N; 
        std::string str_N = to_string(N);
        for (short int j = str_N.length()-1; j >= 0; j--){
            cout << str_N[j] << " ";
        } cout << "\n";
    }
    return 0;
}