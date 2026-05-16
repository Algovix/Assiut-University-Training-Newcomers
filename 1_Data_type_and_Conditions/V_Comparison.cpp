#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

int main(){
    short int A, B; char S;
    cin >> A >> S >> B;
    switch (S)
    {
    case '>':
        if (A > B){
            cout << "Right";
        } else{
            cout << "Wrong";
        }
        break;
    case '<':
        if (A < B){
            cout << "Right";
        } else{
            cout << "Wrong";
        } 
        break;
    case '=':
        if (A == B){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    
    default:
        break;
    }
    return 0;
}