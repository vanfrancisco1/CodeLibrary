#include<iostream>
using namespace std;
int main()
{
	// percentage and converted value
	double PGPercent = 0.3,MGPercent = 0.3,FGPercent = 0.4,
	PG,
	MG,
	FG,
	ProcessPG,
	ProcessMG,
	ProcessFG,
	FinalProcess;
    // process 
	cout << "Input Prelim grade: " << endl;
	cin >> PG;
	cout << "Input Midterm grade: " << endl;
	cin >> MG;
	cout << "Input Final grade: " << endl;
	cin >> FG;
	ProcessPG = PGPercent * PG;
	ProcessMG = MGPercent * MG;
	ProcessFG = FGPercent * FG;
	//Final Process
	FinalProcess = ProcessFG + ProcessMG + ProcessPG / 3;
	cout << FinalProcess << endl;
	
	if (FinalProcess > 60)
	{
		cout << "You Pass!" << endl;
	}
	else
	{
		cout << "You Fail!" << endl;
	}
}
