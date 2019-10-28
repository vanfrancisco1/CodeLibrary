#include<iostream>
using namespace std;

int main()
{
	int number[10],counter = 0,Overall,Average,Highest,Lowest;
	while (counter < 10)
	{
		cout << "Input " << counter <<" numbers :" << endl;
		cin >> number[counter++];
	}
	Highest = number[0];
	Lowest = number[0];
	// getting highest and lowest number in the array
	for (int z = 1; z < counter;z++)
	{
		if (number[z] > Highest)
		{
			Highest = number[z];
		}
		else if (number[z] < Lowest)
		{
			Lowest = number[z];
		}
	}
	
	// Adding all array elements
	for (int i = 0;i < counter;i++)
	{
		Overall += number[i];
	}
	Average = Overall/10;
	cout << "The average is " << Average << endl;
	cout << "The Highest number is " << Highest << endl;
	cout << "The Lowest number is " << Lowest;
}
