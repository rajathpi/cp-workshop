/****
 * 
 * Given an array of size n, consisting only of elements 0, 1, 2
 * Sort it! and print the array
 * 
 * Constraints:
 * 1 <= n <= 10^5
 * Time limit: 1 sec
 * 
 ****/

// Note: No of operations per second in most CP platforms: 10^9

// O(nlogn) -> 10^5 * log(10^5)

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    int freq[3] = {0};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    for(int i = 0; i <= 2; i++) {
        while(freq[a[i]]--) {
            cout << i << " ";
        }
    }    
    cout << "\n";
}


// 5
// 0 1 2 2 0
// 0 0 1 2 2


