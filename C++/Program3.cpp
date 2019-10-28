#include<iostream>
using namespace std;

int main()
{
	string input;
	cout << "Input a string: " << endl;
	cin  >> input;
	
	if (input == string(input.rbegin(),input.rend()))
	{
		cout << "The word is a palindrome :D" << endl;
	}
	else
	{
		cout << "The word is not a palindrome :(" << endl;
	}
}
