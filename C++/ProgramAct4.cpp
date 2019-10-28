#include<iostream>
using namespace std;

struct Players
{
		char Username[100];
		int Age;
		double Average;
		double Score1;
		double Score2;
};

int main()
{
	while (true)
	{
		int pick;
		Players Play[5];
		int Highest = Play[0].Average; 
		int Lowest = Play[0].Average;
		cout << "------MENU-----" << endl;
		cout << "1. Add record" << endl;
		cout << "2. View players records" << endl;
		cout << "3. Compute for the average" << endl;
		cout << "4. Show the player(s) who gets the max average." << endl;
		cout << "5. Show the player(s) who gets the min average."<< endl;
		cout << "6. Exit" << endl;
		cout << "Pick :";
		cin >> pick;
		
		if (pick == 1)
		{
			for (int i = 0;i < 5; i++)
			{
			cout << "Input player username :";
			cin >> Play[i].Username;
			cout << "Input player Age :";
			cin >> Play[i].Age;
			cout << "First map score :";
			cin >> Play[i].Score1;
			cout << "Second map score :";
			cin >> Play[i].Score2;
			system("cls");
			}
			cout << "5 Players Added in records!" << endl;
			continue;
		}
		else if (pick == 2)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "\n\nPlayer's Username : " << Play[i].Username << endl; 
				cout << "Age: "<< Play[i].Age << endl;
				cout << "First Map Score: "<< Play[i].Score1 << endl; 
				cout << "Second Map Score: "<< Play[i].Score2 << endl << "\n\n";
			}
		}
		else if (pick == 3)
		{
			for (int i = 0; i<5;i++)
			{
				Play[i].Average = (Play[i].Score1 + Play[i].Score2) / 2;
				cout << "\n\nPlayer's Username : " << Play[i].Username << endl;	
				cout << "Average: " << Play[i].Average << endl;
			}
		}
		else if (pick == 4)
		{
			for (int i =1;i<5;i++)
			{
				if(Play[i].Average > Highest)
				{
					Highest = Play[i].Average;
				}
			}
			cout << "The Max Average is " << Highest << endl;
		}
		else if (pick == 5)
		{
			for (int i =1;i<5;i++)
			{
				if(Play[i].Average < Highest)
				{
					Highest = Play[i].Average;
				}
			}
			cout << "The Minimum Average is " << Highest << endl;
		}
		else if (pick == 6)
		{
			cout << "thank you for using CSGO Players menu!" << endl;
			break;
		}
		else
		{
			cout << "Invalid Input!" << endl;
		}
	}
}
		


