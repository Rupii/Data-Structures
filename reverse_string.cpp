#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
void reverse(char* str){
	int l;
	l = strlen(str) - 1;
	if(l == 1)
			return ;
	int j = 0;
	cout<<"\nl \tj \tstr\n";
	for(; j<l; j++ ,l--){
		str[j] ^= str[l] ^= str[j] ^= str[l];
		cout<<l<<"\t"<<j<<"\t"<<str<<endl;
		// without temp
		// using XOR bit maipulation
	}
}
int main(){
	char str[50];

	cout<<"\nenter the string\n";
	fflush(stdin);
	scanf("%[^\n]", str);
	
	cout<<"entered string is    \t"<<str<<endl;	
	reverse(str);
	
	cout<<"reverse of string is \t"<<str;
	
	
	
}
