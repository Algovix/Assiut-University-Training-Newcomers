#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

int main(){
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    } 

    for (int j = 0; j < arr.size(); j++){
        if (arr[j] > 0){
            cout << 1 << " ";
        } else if (arr[j] < 0){
            cout << 2 << " ";
        } else {
            cout << arr[j] << " ";
        }
    }
    return 0;
}