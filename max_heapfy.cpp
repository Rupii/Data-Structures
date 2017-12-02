#include<iostream>
#include<cstdlib>
using namespace std;


int size = 9;
void max_heapfy(int A[],int i){
	int l = 2*i + 1;
	int r = 2*(i+1);
	int largest;
	if(l <= size && A[l] > A[i])	
		largest = l;
	else
		largest = i;
	
	if(r <= size &&  A[r] > A[largest])
		largest = r;
	
	if(i != largest){
		A[i] ^= A[largest] ^= A[i] ^=A[largest];
		max_heapfy(A, largest);
	}
}
void build_heap(int A[]){
	for(int i = size/2 ; i>=0;i--){
		max_heapfy(A, i);
	}
}
int extractMax(int A[]){

	int max = 0[A];
	A[0] = A[size-1];
	size -= 1;
	max_heapfy(A, 0);
	return max;
}

int main(){
	int	A[9] ;
	for(int t=0; t<size; t++){
		A[t] = rand() % 20 + 4; 
		cout<<t[A]<<"\t";
	}
	cout<<"buliding max Heap\n";
	
	build_heap(A);
	for(int t=0; t<size; t++){
		cout<<t[A]<<"\t";
	}
	cout<<endl;
	cout<<"Heap Sort is"<<endl;
	while(size>=0){
	
	cout<<extractMax(A)<<endl;
	}

}
