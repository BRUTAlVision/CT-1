
/*

Ujjwal Garg 

2010991755

Set- 3

Q-2


*/
// C++ program for the above approach
#include <bits/stdc++.h>

using namespace std;

// Function to find and print pair
bool chkPair(int A[], int n, int x) {
	bool flag=false;
	for (int i = 0; i < (n - 1); i++) {
		for (int j = (i + 1); j < n; j++) {
			if (A[i] + A[j] == x) {
				cout << "Pair found " << +
				" (" << A[i] << ", " << A[j] << ")" <<
				endl;
				flag=true;


			}
		}
	}
	if(flag==true){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	 	
	try{
	// taking input of size of array
       // and target sum
		int n,x;
		cin>>n>>x;
		// check weather the size is valid or not
 	// if not throw error
		if(n<0){
			throw n;
		}
		int A[n];
	 	// taking input of array element 

		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}

		if (chkPair(A, n, x)) {
			cout << "." << endl;
		} else {
			cout << "Pair not foud " << endl;
		}
	}
	 // if size of array is negative than throw error

	catch(int n){
		cout<<"error"<<endl;
	}
	

	return 0;
}


