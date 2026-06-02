#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

int main(){
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    std::string part_one = "";
    std::string part_two = "";

    for (int i = 0; i < A.size(); i++){
        part_one += to_string(A[i]);
    } for (int j = A.size()-1; j >= 0; j--){
        part_two += to_string(A[j]);
    }

    cout << (part_one == part_two ? "YES" : "NO");
    return 0;
}