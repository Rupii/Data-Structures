#include<iostream>

using namespace std;

int main(){
	cout<<"enter a:\t";
	int a, b;
	cin>>a;
	cout<<endl<<"enter b:\t";
	cin>>b;
	
	cout<<endl<<"a, b before swapping are\t"<<a<<"\t"<<b<<endl;
	a ^= b ^= a ^= b;
	// the is equal to 
	// a = a^b;
	// b = b^a;
	// a = a^b;
	cout<<endl<<"a, b after swapping  are \t"<<a<<"\t"<<b<<endl;
	
}
