/****
 * 
 * Given a number n, print the nth number in the fibonacci sequence  
 * Hint: Use Dynamic Programming!
 *
 ****/

// Note: Two types of dp approaches: top down and bottomup

//f(n) = f(n-1) + f(n-2)
//1 1 2 3 5 8 13 ....

//0 1 1 2 3 5 8


#include <bits/stdc++.h>
using namespace std;

int fib(int n, int dp[]) {
    if(n == 1)
        return 1;
    else if(n == 2)
        return 1;
    else {
        if(dp[n-1] == -1) {
            dp[n-1] = fib(n-1, dp);
        }
        if(dp[n-2] == -1) {
            dp[n-2] = fib(n-2, dp);
        }
        return (dp[n-1] + dp[n-2]);
    }
}

int main() {
    int n;
    cin >> n;

    int dp[n+1];
    for(int i = 0; i <= n; i++) {
        dp[i] = -1;
    }
    dp[1] = dp[2] = 1;
    cout << fib(n, dp) << endl;
}