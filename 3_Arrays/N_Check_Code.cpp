#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N

int main(){
    short int A, B;
    cin >> A >> B;

    std::string S;
    cin >> S;

    if (S[A] != '-'){
        cout << "No";
        return 0;
    } else {
        for (int i = 0; i < S.length(); i++){
            if (i == A) {
                continue;
            } if (S[i] - '0' < 0 || S[i] - '0' > 9){
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes";
    return 0;
}