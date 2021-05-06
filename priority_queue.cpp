//priority queue operations
//priority queue max heap and min heap

#include<bits/stdc++.h>
using namespace std;

void printPQ(priority_queue<int> temp)	//print max heap
{
while(!temp.empty())
{
	cout<<temp.top()<<" ";         //printing the topmost element of priority queue
	temp.pop();					 //delete the topmost element 
}
	
}


void printPQ(priority_queue<int,vector<int>,greater<int> > temp)	//print min heap
{
while(!temp.empty())
{
	cout<<temp.top()<<" ";         //printing the topmost element of priority queue
	temp.pop();					 //delete the topmost element 
}
	
}

int main()
{
	priority_queue<int> pq;					//max heap - elements in descending order
	for(int i=10;i>=0;i--)pq.push(i*10);	//insertion to max heap
	cout<<"Max heap priority queue : \n";
	printPQ(pq);

	priority_queue<int,vector<int>,greater<int> > pq1;	// min heap-elements in descending order
	for(int i=10;i>=0;i--)pq1.push(i*10);				//insertion to min heap
	cout<<"\nMin heap priority queue : \n";
	printPQ(pq1);

return 0;
}