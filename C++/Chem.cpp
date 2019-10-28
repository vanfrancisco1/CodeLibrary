#include<iostream>
// This is the needed package for strcmp() function
#include<cstring>
using namespace std;


// variables for logins
int x=0,y=0;
string ChemData[10][10];
string user,guest = "guest",FormulaName,FormulaSeq;
// Main Chem board


// Show formula on screen
void PrintFormulas()
{
	cout << "Formula List:" << endl;
	cout << "Formula Name  -  Formula Sequence" << endl;
	for(int j = 0;j < 3;++j)
	{
		for(int i = 0;i < 3;++i)
		{
			cout << ChemData[i][j];
		}
	}
}
// Add formula to list
void AddFormula()
{

	int counter;
	while (counter < 3)
	{
	cout << "Please Enter Formula Name: ";
	cin >> FormulaName;
	cout << "Formula Sequence: ";
	cin >> FormulaSeq;
	ChemData[x++][0] = FormulaName + "  -  ";
	ChemData[y++][1] = FormulaSeq;
	counter++;
	}
	PrintFormulas();
}
// Dummy chemboard for unathorized logins
void Dummyboard()
{
	cout << "------------------------ChemCorp Ltd. IT Systems Dept.--------------------------" << endl;
	cout << "Hi Dumb " << guest << endl;
	cout << "Chemicanigans Tray Optionzzzzzzzzzz: " << endl;
	cout << "[1] View this" << endl;
	cout << "[2] you mad bro?" << endl;
	cout << "[3] you think you're good?" << endl;
	cout << "[4] :> :> :> :> " << endl; 
}
void Chemboard()
{
	int Opt;
	cout << "------------------------ChemCorp Ltd. IT Systems Dept.--------------------------" << endl;
	cout << "Hi Chemist " << user << endl;
	cout << "[1] View" << endl;
	cout << "[2] Modify" << endl;
	cout << "[3] Add" << endl;
	cout << "[4] Logout " << endl;
	cin >> Opt;
	if (Opt == 1)
	{
		PrintFormulas();
	}
	else if (Opt == 2)
	{
		
	}
	else if (Opt == 3)
	{
		AddFormula();
	}
}

// Login Module
void login()
{
	cout << "------------------------ChemCorp Ltd. IT Systems Dept.--------------------------" << endl;
	cout << "Enter Username: ";
	cin >> user;
	// If user is correct, Chemboard() function will activate;
	if (user == "clarice")
	{
		Chemboard();
	}
	else
	{
		// if the username inserted is not correct Dummyboard() function will activate
		Dummyboard();
	}
}
	int main()
	{
		// Starts the Login Module;
		AddFormula();	
		login();
	}

