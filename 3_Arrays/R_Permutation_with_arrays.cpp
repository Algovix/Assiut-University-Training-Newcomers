#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    vector<int> B(N);
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }

    for (int i = 0; i < A.size(); i++){
        int selected_item = A[i];
        int count_selected_item_in_A = 0, count_selected_item_in_B = 0;

        for (int j = 0; j < N; j++){
            if (A[j] == selected_item){
                count_selected_item_in_A++;
            } if (B[j] == selected_item){
                count_selected_item_in_B++;
            }
        } if (count_selected_item_in_A != count_selected_item_in_B){
            cout << "no"; 
            return 0;
        }
    } cout << "yes"; 
    return 0;
}