#include<iostream>

using namespace std;

int main(){
	// Finding the odd number occurece
	int a[7] = {1, 2, 3, 1, 2, 2, 3};
	int c;
	for(int i = 0; i< 7; i++){
		c ^= a[i];
	}
	
	cout<<"the number with odd no. of times occurence is : "<<c;
}
