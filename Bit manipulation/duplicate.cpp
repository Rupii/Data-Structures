// program to find the non duplicate in an array 
// in O(n)
#include <iostream>
using namespace std;

int duplicate(int arr[]){
	int result = 0;
	for(int i=0;i<5;i++){
		result ^= arr[i];
	}
	return result;
}
int main(){
	int arr[] ={2, 2,3, 4, 3};
	
	cout<<"the duplicate element is: 	"<<duplicate(arr);	

}
