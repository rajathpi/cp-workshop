#include<bits/stdc++.h>
using namespace std;


void print(set<int> x){
	set <int>::iterator itr;
	for(itr = x.begin(); itr != x.end(); itr++){
		cout << *itr << " ";
	}
	cout << '\n';
}

int main(){



	//--------------S E T--------------//

	// -> A set is a container that stores unique element following a specific order

	// Declaring a set

	set <int> a;

	
	// empty() -> Returns whether the set is empty or not
	if(a.empty()){
		cout << "Set empty" << '\n';
	}


	// inserting elements in random order

	a.insert(60);
	a.insert(40);
	a.insert(10);
	a.insert(80);
	a.insert(50);
	a.insert(20);
	a.insert(30);

	// inserting 30 again, but only one 30 will be added to the set
	a.insert(30);

	// Printing set

	set <int>::iterator it;


	//	The elements will be stored in ascending order
	// OUTPUT -> 10 20 30 40 50 60 80
	cout << "Elements of set are : ";
	for(it = a.begin(); it != a.end(); it++){
		cout << *it << " ";
	}
	cout << '\n';




	// size()
	cout << "Size of set A -> ";
	cout << a.size() << '\n';
	// OUTPUT -> 7


	// To store the elements in descending order 
	set <int, greater<int>> b;

	b.insert(60);
	b.insert(40);
	b.insert(10);
	b.insert(80);
	b.insert(50);
	b.insert(20);
	b.insert(30);
	b.insert(30);

	// OUTPUT -> 80 60 50 40 30 20 10 
	cout << "Elements of set B in descending order are : ";
	for(it = b.begin(); it != b.end(); it++){
		cout << *it << " ";
	}
	cout << '\n';




	// Assigning the elements from A to C
	set <int> c(a.begin(), a.end());

	cout << "Elements of set C are : ";
	print(c);
	// OUTPUT -> 10 20 30 40 50 60 80




	// Remove all elements up to 40 in C
	c.erase(c.begin(), c.find(40));

	cout << "Remove all elements up to 40 in C : ";
	print(c);
	// OUTPUT -> 40 50 60 80




	// Remove specific element in C

	c.erase(50);

	cout << "Remove specific element in C : ";
	print(c);
	//Before -> 40 50 60 80 
	//After  -> 40 60 80 



	cout << "Count : \n";
	// Count() -> returns 1 if element is present in the set 
			   // returns 0 if element is not present in the set
	//set A -> 10 20 30 40 50 60 80 
	cout << a.count(50) << '\n';	// 50 is present so OUTPUT -> 1
	cout << a.count(100) << '\n'; 	// 100 is not present so OUTPUT -> 0




	// emplace() -> used to insert a new element into the set, only if the element to be inserted is unique and does not already exists in the set.

	// set C elements -> 40 60 80
	// emplace 30 	<- doesn't exit
	// emplace 80	<- already exists

	c.emplace(30);
	c.emplace(80);

	cout << "emplace() : ";
	print(c); // OUTPUT -> 30 40 60 80




	// array to set
	int arr[]={12,75,10,32,20,25};
  	set <int> d (arr,arr+6);     // 10,12,20,25,32,75 

  	cout << "array to set : ";
  	print(d);
  	//OUTPUT -> 10 12 20 25 32 75 




	// swap() -> Exchanges the content of the set

  	// set C -> 30 40 60 80
  	// set D -> 10 12 20 25 32 75

  	c.swap(d);

  	cout << "swap() : \n";
  	print(c); // OUTPUT -> 10 12 20 25 32 75
  	print(d); // OUTPUT -> 30 40 60 80




	// find() -> searching an element within a set
	// set A -> 10 20 30 40 50 60 80 
	int val = 50;

	if(a.find(val) != a.end())
		cout<< "The set contains "<< val << '\n';
	else
		cout<< "The set does not contains "<< val << '\n';



	// Copy set to vector

  	//set A -> 10 20 30 40 50 60 80 
	vector <int> v(a.size());		//a.size() is used to reserve enough space in the vector to hold the content of set A
	copy(a.begin(), a.end(), v.begin());

	cout << "Copy set A to vector V : ";	// OUTPUT -> 10 20 30 40 50 60 80
	for(auto i:v){
		cout << i << " ";
	}
	cout << '\n';
}