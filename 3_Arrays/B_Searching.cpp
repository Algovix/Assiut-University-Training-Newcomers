#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

int main(){
    int n;
    cin >> n;

    vector<long long int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int X;
    cin >> X;

    for (int j = 0; j < n; j++){
        if (arr[j] == X){
            cout << j;
            break;
        } if (j == n-1){
            cout << -1;
        }
    } 
    return 0;
}