#include<iostream>
using namespace std;

int main()
{
	int NumOfStack;
	cout << "Input number of Stack: ";
	cin >> NumOfStack;
	string NameStack[NumOfStack];
	int NumberStack[NumOfStack];
	
	for(int i = 0; i < NumOfStack;i++)
	{
		cout << "Input name: ";
		cin >> NameStack[i];
	}
	for(int z = 0; z < NumOfStack;z++)
	{
		cout << "Input Number: ";
		cin >> NumberStack[z];
	}
	
	cout << "The Stack names and numbers are " << endl;
		for (int v = 0 ; v < NumOfStack;v++)
		{
			cout << NameStack[v] << " " << NumberStack[v] << endl;
		}
}
