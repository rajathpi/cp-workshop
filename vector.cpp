/*
The header file that includes every Standard library
*/
#include<bits/stdc++.h>

using namespace std;

void print(vector<int> x){
	vector <int>::iterator it;
	for (it=x.begin(); it!=x.end(); it++) {
		cout << *it << " ";
	}
	cout << '\n';
}

int main(){

	
	//--------------V E C T O R--------------//

	vector <int> v; 

	if(v.empty()){		//checking if vector is empty
		cout << "The vector is empty" << '\n';
	}

	v.push_back(5);		//pushing values to vector v
	v.push_back(3);
	v.push_back(20);
	v.push_back(10);
	v.push_back(100);
	v.push_back(15);

	//Size of the vector == number of elements in the vector
	//v.size()
	cout << "Number of elements in the vector : " << v.size() << '\n';

	// iterating over the vector, declaring the iterator
	vector <int>::iterator it;

	cout << "The vector v contains: ";
	for (it=v.begin(); it!=v.end(); it++) {
		cout << *it << " ";
	}

	cout << '\n';

	//getting value at particular position
	int pos = 2;
	cout << "Element at position " << pos << " is " << v.at(pos) << '\n';

	//Deleting an element at specific position
	v.erase(v.begin() + pos);
	//Before deleting : 5 3 20 10 100 15 
	//After deleting : 5 3 10 100 15 

	cout << "Elements in vector V: ";
	print(v); //created a function to print the elements in the vector

	//Copying the element from one vector to another
	//5 3 10 100 15
	vector<int>a(v);

	cout << "Elements in vector a: ";
	print(a);

	//Reversing the vector elements
	//15 100 10 3 5 
	reverse(a.begin(), a.end());

	cout << "reversing the vector elements: ";
	print(a);

	//Sorting the elements of vector a
	//3 5 10 15 100 
	sort(a.begin(), a.end());

	cout << "Sorting the elements of vector a : ";
	print(a);

	//Sorting in descending order
	//100 15 10 5 3 
	sort(a.rbegin(), a.rend());

	cout << "Sorting in descending order : ";
	print(a);

	//Other ways of declaring vector
	vector<int> b(5); // vector size initilized to 5
	vector<int> c(5,0); // vector of size 5, all 5 elements initlized to 0, ie ->  0,0,0,0,0

	cout << "The elements of vector C are : ";
	print(c);

	vector<int> d = {1,2,3,3,3,3,3,3,4,4,5,6,7,8,8,8,8,8,8,9}; //initilizing the elements of vector D

	cout << "The elements of vector D are : ";
	print(d);

	//Counting the occurnace of an element
	//Count 3
	int cnt = count(d.begin(), d.end(), 3);

	cout << "The number of occurance of 3 in the vector d -> " << cnt << '\n';

	//First occurance of an element in vector
	int num = 3;
	vector<int>::iterator low = lower_bound(d.begin(), d.end(), num);
	cout << "First occurance of 3 in vector D -> " << low - d.begin() << '\n';

	//Last occurance of an element in vector
	vector<int>::iterator high = upper_bound(d.begin(), d.end(), num);
	cout << "Last occurance of 3 in vector D -> " << high - d.begin() << '\n';

	//Removing all occurance of a speific element from a vector
	//Let us remove 8 from vector D
	d.erase(remove(d.begin(), d.end(), 8), d.end());
	
	cout << "After removing all occurance of 8 from vector D : ";
	print(d);

	//Removing all multiple occurnace of an element from vector
	//or keeping only unique elements in vector
	d.erase(unique(d.begin(), d.end()), d.end());

	cout << "unique elements in vector D : ";
	print(d);

	//Rotate left
	//rotating left 1 times
	int n = 1;
	rotate(d.begin(), d.begin() + n, d.end());

	cout << "Rotate left : ";
	print(d);

	//Rotate right
	//rotating right 3 times
	n = 3;
	rotate(d.rbegin(), d.rbegin() + n, d.rend());

	cout << "Rotate right : ";
	print(d);

	vector <int> e = {1,2,3,4,5};
	//Sum of all the elements of the vector
	int sum = accumulate(e.begin(), e.end(), 0);

	cout << "The sum of all elemets of vector E is -> " << sum << '\n';

	//Multiply all elements of vector
	int mul = accumulate(e.begin(), e.end(), 1., multiplies<double>());

	cout << "The product of all elemets of vector E is -> " << mul << '\n';

	//Search if an element exist in an array
	//if exits return 1 else returns 0
	int exi = binary_search(e.begin(), e.end(), 5);
	cout << "exists -> " << exi << '\n';

	exi = binary_search(e.begin(), e.end(), 9);
	cout << "doesn't exists -> " << exi  << '\n';

	//Insert element at any position of the vector
	//at pos 2, we shall insert 100
	pos = 2;
	num = 100;
	e.insert(e.begin()+pos, num);

	cout << "Vector E after inserting 100 at position 2 -> ";
	print(e);

	//Merging 2 vector elements
	vector<int> arr1 = { 1,2,3,4,5 };
    vector<int> arr2 = { 6,7,8,9,10 };
    vector<int> arr3(10);
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
    cout << "Merging 2 vector elements : ";
    print(arr3);
    
}