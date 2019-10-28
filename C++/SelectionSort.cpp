#include<iostream>
#include <windows.h>
using namespace std;
// Set of Numbers in array
int A[] = {10,30,40,20,50}, n = 5;
int main()
{
	// Selection Sort
	for (int i = 0 ; i < n ; i++)
	{
		// Sets to the first index of the Array
		int min = A[i],index = i;
		// Searching of the smallest number
		for (int z = i ;z < n;z++)
		{
			// if searched number in the array is smaller than the minimum number it replaces the minimum number
			if (A[z] < min)
			{
				min = A[z];
				index = z;
			}
		}
		// Replaces the acquired minimum number to the front of array
		A[index] = A[i];
		A[i] = min;

	}
		/**
		10 
		30
		40
		20
		50
		**/
		// Display Arranged numbers
		cout << "The Arranged Values are: ";
		for (int i = 0;i<n;i++)
		{
			Sleep(5000);
			cout << A[i] << " ";
		}
		

	


}
