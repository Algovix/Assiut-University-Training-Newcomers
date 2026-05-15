#include<iostream>
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

using namespace std;
int main(){
    short int X;
    cin >> X;
    if ((X/1000) % 2 == 0){
        cout << "EVEN";
    } else{
        cout << "ODD";
    }
    return 0;
}