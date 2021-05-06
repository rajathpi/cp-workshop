//Operations in vector
//declaration , push_back,pop_back,sort ,iterate,size(),auto,binary_search,lower bound ,upper bound

#include<bits/stdc++.h>
using namespace std;


//function to print a vector
void printvect(vector<int> &vect)
{
for(auto it=vect.begin();it!=vect.end();it++)
	{
		cout<<*it<<" ";
	}
	
}


int main()
{
	vector<int> vect;		//declaration

	for(int i=10;i>=0;i--)
	{
		vect.push_back(i);		// insertion  
	}
	cout<<"Vector elements : \n";
	printvect(vect);
	cout<<"\nAfter pop: \n";
	
	vect.pop_back();			//deletes the last element from the vector
	printvect(vect);


	sort(vect.begin(),vect.end());	//sort a vector
	cout<<"\nAfter sorting :\n";
	printvect(vect);
	
	cout<<"\nBinary search";
	bool ans=binary_search(vect.begin(),vect.end(),4);	//binary search in a vector returns 1(true) if present else returns 0(if not present)
	if(ans==true)
	{
		cout<<"\nElement is present ";
	}
	else cout<<"\nElement is not present";


	return 0;
}

