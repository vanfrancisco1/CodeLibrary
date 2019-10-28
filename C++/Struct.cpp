#include<iostream>
using namespace std;

struct Student
{
	int idNum;
	string Name;
	double gradeMath,
	gradeEnglish,
	gradeScience,
	gradeHistory;
};


int main()
{
	Student stud[4];
	for (int i = 0; i < 4;i++)
	{
	cout << "Input ID number: ";
	cin >> stud[i].idNum;
	cout << "Input Name: ";
	cin.ignore();
	getline(cin,stud[i].Name);
	cout << "Input Grade in Math: ";
	cin >> stud[i].gradeMath;
	cout << "Input Grade in English: ";
	cin >> stud[i].gradeEnglish;
	cout << "Input Grade in Science: ";
	cin >> stud[i].gradeScience;
	cout << "Input Grade in History: ";
	cin >> stud[i].gradeHistory;
	}
	for (int i = 0; i < 4;i++)
	{
	cout << "Student " << stud[i].Name << " has the grade of the ff: \n\n" << 
	"Math - " << stud[i].gradeMath << "\n" <<
	"English - " << stud[i].gradeEnglish << "\n" <<
	"Science - " << stud[i].gradeScience << "\n" <<
	"History - " << stud[i].gradeHistory << "\n\n";
	}
}
