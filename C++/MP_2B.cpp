#include<iostream>
using namespace std;
int main()
{
	int StudentGrade;
	cout << "Input the Student's Grade: " << endl;
	cin >> StudentGrade;
	if ( StudentGrade >= 90)
	{
		cout << "You got an A!" << endl;
	}
	else if ( StudentGrade >= 80)
	{
		cout << "You got an B!" << endl;
	}
	else if ( StudentGrade >= 70)
	{
		cout << "You got an C!" << endl;
	}
	else if ( StudentGrade >= 60)
	{
		cout << "You got an D!" << endl;
	}
    else
    {
    	cout << "You got an F!" << endl;
	}
	
	
}
