#include <iostream>
#include <vector>
using namespace std;

// Probelm Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

int main(){
    short int N; bool can_perform_operation = true;
    cin >> N;

    vector<int> A(N);
    for (short int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    int num_operations = 0;
    while (true){
        bool Exit = false;
        for (short int i = 0; i < A.size(); i++){
            if (A[i] % 2 == 0){
                A[i] /= 2;
            } else{
                Exit = true;
            }
        } if (Exit) break; 
        num_operations++;
    }

    cout << num_operations;
    return 0;
}