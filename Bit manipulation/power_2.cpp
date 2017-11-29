#include<iostream>


// Checking if the given no is power of 2 or NOT

using namespace std;

int main(){
		int n;
		cout<<"Enter the no. to check Whether it is power of two \n";
		cin>>n;
		//using bit wise AND
		if((n&(n-1))== 0)
			cout<<"the given no. is power of 2";
		
		else
		
			cout<<"it is not the power of two";
	
	}	
	
