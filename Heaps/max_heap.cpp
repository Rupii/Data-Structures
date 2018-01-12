#include <iostream>
using namespace std;

void max_heap(int* arr, int i, int size){
	int k = 2*i + 1;
	int j = 2*i + 2;
	int largest = i;
	if(k < size && arr[k] > arr[largest] )  
		largest = k;
	
	if(j < size && arr[largest] < arr[j])
		largest = j;
	
	if(largest != i)
		{
			arr[i] ^= arr[largest] ^= arr[i] ^= arr[largest];
			max_heap(arr, largest, size);
		}
}

int main(){
	
	int arr[] = {4, 7, 2, 34, 1, 8, 45, 3};
	
	int size = sizeof(arr)/sizeof(int);
	cout<<"before heapyfing\n";
	for(int i = 0;i < size ;i++){
		cout<<arr[i]<<"\t";
	}
	for(int i = size / 2  -  1; i >= 0 ; i--){
		max_heap(arr, i, size);
	}
	cout<<endl<<endl;
	
	cout<<"After Heafying\n";
	for(int i = 0;i < size ;i++){
		cout<<arr[i]<<"\t";
	}
}
