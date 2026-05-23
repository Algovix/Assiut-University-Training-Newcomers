#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

int main(){
    int T,X,Y;
    cin >> T; int max, min;
    for (int i = 0; i < T; i++){
        cin >> X >> Y; int SUM=0;
        if (X > Y){
            max = X;
            min = Y;
        } else if (X < Y){
            max = Y;
            min = X;
        } else{
            cout << SUM << "\n"; continue;
        }
        for (int j = min+1; j < max; j++){
            if (j % 2 != 0){
                SUM += j;
            }
        } cout << SUM << "\n";
    }
    return 0;
}