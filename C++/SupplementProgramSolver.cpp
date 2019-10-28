#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string choice;
	double input1;
	double input2;
	double pi = 3.14;
	while(true)
	{
	cout << "---------------------------------------" << endl;
	cout << "Welcome to Van's Area of Shapes Solver!" << endl;
	cout << "---------------------------------------" << endl;
	cout << "[S] - Square" << endl;
	cout << "[R] - Rectangle" << endl;
	cout << "[C] - Circle" << endl;
	cout << "[X] - Exit" << endl;
	cout << "Input your choice: ";
	cin >> choice;
	transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
		if (choice == "s")
		{
				cout << "Input number of side: ";
				cin >> input1;
				double AreaSquare = input1 * input1;
				cout << "The area of Square is: " << AreaSquare << endl;
				continue;
		}
		else if (choice == "r")
		{
				cout << "Input length: ";
				cin >> input1;
				cout << "Input width: ";
				cin >> input2;
				double AreaRectangle = input1 * input2;
				cout << "The area of Square is: " << AreaRectangle << endl;
				continue;
		}
		else if (choice == "c")
		{
				cout << "Input Radius: ";
				cin >> input1;
				double AreaCircle = pi * (input1 * input1);
				cout << "The area of Square is: " << AreaCircle << endl;
				continue;
		}
		else if (choice == "x")
		{
				cout << "Thank you for using the program! " << endl;
				break;
		}
		else
		{
			cout << "Invalid Input!";
		}
		return 0;
	}
}
