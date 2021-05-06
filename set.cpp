//A question on set

/*



Q  Given an array of n elements,Count the number of  distinct elements.
        
            E.g:-
            Input :
            11
            1  6 5 10 100 25 27 10 10 5 6       

            Output:
            7


//Different approaches 
1-Brute Force:-
count=0
For every element i check if it has occured before :-if not count++ else move next        

2-Sort

sort the array
count=0
For every element check if the previous element is the same as current element,if not count++


3-Hashing 
Insert everthing in a set and print its size 
*/


#include<bits/stdc++.h>
using namespace std;


//The third method
int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);       //set stores all the unique values
    }

    return s.size();
}
 

int main()
{
    int arr[] = { 6, 10, 5, 4, 9, 120, 4, 6, 10,11,10,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinct(arr, n);

    
    return 0;
}