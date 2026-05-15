#include<iostream>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
/*
Nasted if-else:
    if (X >= '0' && X <= '9'){ 
        cout << "IS DIGIT";
    } else { 
        cout << "ALPHA" << "\n";
        if (X >= 'A' && X <= 'Z'){
            cout << "IS CAPITAL";
        } else {
            cout << "IS SMALL";
        }
    }
*/

using namespace std;
int main(){
    char X;
    cin >> X;
    if (X >= '0' && X <= '9'){ 
        cout << "IS DIGIT";
    } else if (X >= 'A' && X <= 'Z') { 
        cout << "ALPHA\n" << "IS CAPITAL";
    } else if (X >= 'a' && X <= 'z') {
            cout << "ALPHA\n" << "IS SMALL";
    }
    return 0;
}