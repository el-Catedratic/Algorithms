
#include <iostream>
using namespace std;

void merge(int* arr,int* brr, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int prol = 1;
	int pror = 1;
	for (int i = 0; i < n1; i++){
			 arr[l + i];
		prol = prol*arr[l + i];
	}
	for (int j = 0; j < n2; j++){
		pror = pror*arr[m + 1 + j];
	}

	for(int k=l;k<m+1;k++){
		brr[k] = brr[k]*pror;
	}
	for(int k = m+1;k<=r;k++){
		brr[k] = brr[k]*prol;
	}
}

void mergePro(int* arr,int* brr,int l,int r){
	if(l>=r){
		return;
	}
	int m = (l+r-1)/2;
	mergePro(arr,brr,l,m);
	mergePro(arr,brr,m+1,r);
	merge(arr,brr,l,m,r);
}


void printArray(int* A, int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{	int n;
	cin>>n;
	int arr[n]; 
    int barr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		barr[i] = 1;
	}
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	mergePro(arr, barr,0, arr_size - 1);
	printArray(barr, arr_size);
	return 0;
}


