/****
 * 
 * Recursion
 * 
 * There are n stairs, a person standing at the bottom wants to reach the top. 
 * The person can climb either 1 stair or 2 stairs at a time. 
 * Count the number of ways, the person can reach the top.
 * 
 ****/    

// 5 stairs
// 1 1 1 1 1
// 1 2 1 1
// 2 2 1
// ...

// 1 1 1 1 1
// 1 1 1 2
// 1 1 2 1
// 1 2 1 1
// 2 1 1 1
// 1 2 2 , 2 1 2, 2 2 1

// 1 1
// 2

#include <bits/stdc++.h>
using namespace std;

// 0! = 1
int stair_count(int n) {

    if(n == 0)
        return 1;
    else if(n == 1) 
        return 1;
    else
        return (stair_count(n-1) + stair_count(n-2));
}

int main() {
    cout << stair_count(5) << endl;
}


