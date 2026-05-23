#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

int main(){
    short int A, B; bool luck_numbers_found = false;
    short int max, min;
    cin >> A >> B;
    if (A > B){
        max = A;
        min = B;
    } else if (A < B){
        max = B;
        min = A;
    } else {
        cout << -1;
        return 0;
    }
    for (short int i = min; i <= max; i++){
        for (short int j = 0; j < to_string(i).length(); j++){
            if (to_string(i)[j] != '4' && to_string(i)[j] != '7'){
                break;
            } else if (j == to_string(i).length()-1){
                cout << i << " "; luck_numbers_found = true;
            }
        } 
        if (i == max-1 && luck_numbers_found == false){
            cout << -1;
        }
    } 
    return 0;
}