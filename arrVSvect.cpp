//vector
//This progams tells about how vector is dynamic and array is not 
//Note:- arrays can be dynamic too but you have to use new and delete operations and also vectors are easy to use
/*
->Input 
10 1 20 1 40 1 50 1 60 2
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];                  
    vector<int> vect;
    
    int i=0;
    int choice=1;
    while(choice==1)
    {
//	cout<<"Enter a value :";
	int temp;
	cin>>temp;
	arr[i++]=temp;
	vect.push_back(temp);
//	cout<<"\n Do you want to enter more values ? : 1/2";
	cin>>choice;
    }
    
    int arraySize = sizeof(arr)/sizeof(arr[0]);
    int vectorSize=vect.size();

    cout<<"Array size is :"<<arraySize<<"\n";
    cout<<"Vector size is :"<<vectorSize <<"\n";
return 0;
}
