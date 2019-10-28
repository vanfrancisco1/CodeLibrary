#include<iostream>
using namespace std;
int main()
{
	string YourHoroscope;
	cout << "What is your Horoscope?" << endl;
	cout << "1. Aries" << endl;
	cout << "2. Taurus" << endl;
	cout << "3. Gemini" << endl;
	cout << "4. Cancer" << endl;
	cout << "5. Leo" << endl;
	cout << "6. Virgo" << endl;
	cout << "7. Libra" << endl;
	cout << "8. Scorpio" << endl;
	cout << "9. Sagitarius" << endl;
	cout << "10. Capricorn" << endl;
	cout << "11. Aquarius" << endl;
	cout << "12. Pisces" << endl;
	cout << "Your Horoscope: ";
	cin >> YourHoroscope;
	if (YourHoroscope == "1")
	{
		cout << "You have a lucky day! Your Lucky color is Red/Scarlet and Lucky Number is 9/6";
	}
	else if (YourHoroscope == "2")
	{
		cout << "You have a lucky day! Your Lucky color is White/Green and Lucky Number is 6/5";
	}
	else if (YourHoroscope == "3")
	{
		cout << "You have a lucky day! Your Lucky color is Green/Yellow/Orange and Lucky Number is 5/6";
	}
	else if (YourHoroscope == "4")
	{
		cout << "You have a lucky day! Your Lucky color is Blue/Silver and Lucky Number is 2/7/9";
	}
	else if (YourHoroscope == "5")
	{
		cout << "You have a lucky day! Your Lucky color is Golden/Orange/yellow/Red and Lucky Number is 1/5/9";
	}
	else if (YourHoroscope == "6")
	{
		cout << "You have a lucky day! Your Lucky color is Green/White/Grey/Yellow/Orange and Lucky Number is 5/6/2";
	}
	else if (YourHoroscope == "7")
	{
		cout << "You have a lucky day! Your Lucky color is Blue/Jade Green and Lucky Number is 5/6/9";
	}
	else if (YourHoroscope == "8")
	{
		cout << "You have a lucky day! Your Lucky color is Red/Violet and Lucky Number is 1/4/2/7";
	}
	else if (YourHoroscope == "9")
	{
		cout << "You have a lucky day! Your Lucky color is Light Blue/white/Cream/Orange and Lucky Number is 6/5/3/8";
	}
	else if (YourHoroscope == "10")
	{
		cout << "You have a lucky day! Your Lucky color is Black/Indigo and Lucky Number is 6/9/8";
	}
	else if (YourHoroscope == "11")
	{
		cout << "You have a lucky day! Your Lucky color is Electic Blue/Grey/Ultramarine Blue and Lucky Number is 2/3/7/9";
	}
	else if (YourHoroscope == "12")
	{
	    cout << "You have a lucky day! Your Lucky color is Sea Green/Aqua and Lucky Number is 3/7";	
	}
	else
	{
	    cout << "None in the Options";	
	}
}
