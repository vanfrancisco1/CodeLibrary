
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
char ltr;
	do
	{
		cout<<"TEMPERATURE CONVERTER" << endl;
		cout<<"F - Centigrade to Fahrenheit\n";
		cout<<"C - Fahrenheit to Centigrade\n";
		cout<<"X - Exit\n";
		cout<<"Enter your choice:";
		cin>>ltr;
		switch(ltr)
		{
				case 'f':
				case 'F':
				{
				float Fah,Cel;
				cout<<"Enter Celsius temperature:";
				cin>>Cel;
				Fah = 9*Cel/5 + 32;
				cout<<Cel<<" degrees is "<<Fah<<" in Fahrenheit."<< endl;
				break;
				}
				case 'c' :
				case 'C' : 
			    {
				float Fah,Cel;
				cout<<"Enter Fahrenheit temperature:";
				cin>>Fah;
				Cel = 5*(Fah-32)/9;
				cout<<Fah<<" degrees is "<<Cel<<" in Celsius" << endl;
				break;	
				}
				getch();
		}
	}
	while(ltr=='c'||ltr=='C'||ltr=='f'||ltr=='F');
	{
	return 0;
	}
}


