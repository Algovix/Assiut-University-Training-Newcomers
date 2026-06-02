#include <iostream>
#include <vector>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

int main(){
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    long long sum = 0;

    for (int j = 0; j < arr.size(); j++){
        sum += arr[j];        
    } 
    
    if (sum < 0){
        sum *= -1;
    } 
    
    cout << sum;

    return 0;
}