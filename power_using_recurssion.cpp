#include<iostream>
using namespace std;
int pow(int x, int n){
	if(n == 0)
		return 1;
	else if (n%2 == 0)
	{
			int y = pow(x, n/2);
			return y*y;
	}
	else
		return x*(pow(x, n-1));
}
int main(){
	int n, x;
	cout<<"enter x, n values\n";
	cin>>x>>n;
	cout<<endl<<pow(x, n);
}
