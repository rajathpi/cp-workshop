/*
Q  Given two sets of strings of n and k,Count the number of  occurences of each string 1<=i<=k in n.
	 		
		
			E.g:-		
			
			Input	
				  


			n={"TLE"  ,"WAontestcase1", "AC" ,"RE" ,"WAontestcase1",  "gohome"}

			k={"WA","TLE","RE","AC"}
			
					
			output 
			WA:0  TLE:1  RE:1  AC:1      

			
				How the map looks after insertion into the map
				"WA","TLE","RE","AC" "WAontestcase1" "gohome"
				|		|	 |	   |	|				|
				0		1	 1	   1	2				1
*/


#include<bits/stdc++.h>
using namespace std;

void countOccurence(vector<string> n,vector<string> k)
{
	unordered_map<string,int> mp;

	for(int i=0;i<n.size();i++)
	{
		mp[n[i]]++;
	}

	for(int i=0;i<k.size();i++)
	{
		cout<<k[i]<<":"<<mp[k[i]]<<" ";
	}

}
 

int main()
{
    vector<string> n = {"TLE"  ,"WAontestcase1", "AC" ,"RE" ,"WAontestcase1",  "gohome"};
    vector<string> k={"WA","TLE","RE","AC"};
    countOccurence(n,k);

    
    return 0;
}