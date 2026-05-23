#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int answer = 0;
    for (int i = 1; i <= N; i++) {
        int num = i;
        int digitsSum = 0;
        while (num > 0) {
            digitsSum += num % 10;
            num /= 10;
        }
        if (digitsSum >= A && digitsSum <= B) {
            answer += i;
        }
    }
    cout << answer;
    return 0;
}