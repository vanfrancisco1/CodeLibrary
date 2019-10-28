#include <iostream>
using namespace std;

int Fibonacci(int z)
{
	if (z == 0 || z == 1)
	{
		return(z);
	}
	else 
	{
		return Fibonacci(z-1) + Fibonacci(z-2);
	}
}
int main()
{
 int x,i=0;
 cout << "Enter the number of terms of series: ";
 cin >> x;
 cout << "The Fibonacci Series: ";
 while (i < x)
 {
 	cout << Fibonacci(i) << " ";
 	i++;
 }		
}
