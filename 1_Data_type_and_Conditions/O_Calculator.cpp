#include<iostream>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

using namespace std;
int main(){
    int A, B; char S;
    cin >> A >> S >> B;
    switch (S){
    case '+':
        cout << A+B; 
        break;
    case '*':
        cout << A*B;
        break;
    case '/':
        cout << A/B;
        break;
    case '-':
        cout << A-B;
        break;
    default:
        break;
    }

    return 0;
}