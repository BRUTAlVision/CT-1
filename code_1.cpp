
/*

Ujjwal Garg 

2010991755

Set- 3

Q-1 


*/

#include <bits/stdc++.h>
using namespace std;

// make the swap function to swap the specific indexes
void swap(int Array[], int i, int j)
{
	int temp = Array[i];
	Array[i] = Array[j];
	Array[j] = temp;
}


void reArrayangeArray(int Array[], int n)
{
    // starting from index 1 to check the condition 
	for (int i = 1; i < n; i += 2)
	{
        // if the previous element is greater than the current element than swap the element 
        // 
		if (Array[i - 1] > Array[i]) {
			swap(Array, i - 1, i);
		}
		
        // if the next element is greater than the current element than swap the element
		
		if (i + 1 < n && Array[i + 1] > Array[i]) {
			swap(Array, i + 1, i);
		}
	}
}

 // main function 
int main()
{
	
	try{
 	// taking input of size of array
		int n;
		cin>>n;

 	// check weather the size is valid or not
 	// if not throw error
		if(n<0){
			throw n;
		}
		int Array[n];
 	// taking input of array element 
		for (int i = 0; i < n; ++i)
		{
			cin>>Array[i];
		}
 	// function to re arrange the array

		reArrayangeArray(Array,n);
 	// printing the array element after rearranging
		for (int i = 0; i < n; ++i)
		{
			cout<<Array[i]<<" ";
		}
		
	}
 // if size of array is negative than throw error
	catch(int n){
		cout<<"error";
	}
	
	return 0;
}
