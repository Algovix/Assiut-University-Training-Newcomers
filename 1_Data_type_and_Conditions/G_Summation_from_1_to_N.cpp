#include<iostream>

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

/*
========================================================
My First Attempt: Using a loop
- Note: This approach is too slow for very large numbers
=========================================================
using namespace std;
int main(){
    long long N;
    cin >> N;
    for (int i = N-1; i > 0; i--){
        N += i;
    }
    cout << N; 
    return 0;
}
*/

/*
========================================================
My Optimized Solution: Using a math formula
- Note: This calculates the answer instantly in one step
=========================================================
*/
using namespace std;
int main(){
    long long N;
    cin >> N;
    
    // Using the math formula to find the sum from 1 to N
    cout << (N * (N + 1)) / 2 << "\n";
    
    return 0;
}