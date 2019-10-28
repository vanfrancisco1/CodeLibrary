#include<iostream>
using namespace std;
int main()
{
	char Option;
	int Money,Change;
	cout << "Welcome to Van's Shop!" << endl;
	cout << "Menu:" << endl;
	cout << "1. Beer - 20 Pesos" << endl;
	cout << "2. Coca Cola - 30 Pesos " << endl;
	cout << "3. Sprite - 50 Pesos " << endl;
	cout << "4. RC - 25 Pesos" << endl;
	cout << "5. Water - 10 Pesos" << endl;
	cout << "User's Option: ";
	cin >> Option;
	if (Option == '1')
	{
		cout << "User has chosen Beer" << endl;
	}
	else if (Option == '2')
	{
		cout << "User has chosen Coca Cola" << endl;
	}
    else if (Option == '3')
	{
		cout << "User has chosen Sprite" << endl;
	}
	else if (Option == '4')
	{
		cout << "User has chosen RC" << endl;	
	}
	else if (Option == '5')
	{
		cout << "User has chosen Water" << endl;
	}
	else
	{
		cout << "None of the Options" << endl;
	}	
}

