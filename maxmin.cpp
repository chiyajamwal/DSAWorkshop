
#include<iostream>
using namespace std; 

int maximum(int arr[], int n) 
{ 
	int i; 

	int max = arr[0]; 
	for (i = 1; i < n; i++) 
		if (arr[i] > max) 
			max = arr[i]; 

	return max; 
} 
int minimum(int arr[], int n) 
{ 
	int i; 

	int min = arr[0]; 
	for (i = 1; i < n; i++) 
		if (arr[i] < min) 
			min = arr[i]; 

	return min; 
} 
int main() 
{ 
	int arr[] = { 100, 324, 45, 90, 9808 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Largest in given array is " << maximum(arr, n); 
	cout << "Largest in given array is " << minumum(arr, n); 

	return 0; 
}
