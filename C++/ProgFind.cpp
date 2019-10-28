#include<iostream>
#include <fstream>
#include<stdlib.h>
#include<ctype.h>
using namespace std;

int main()
{
ifstream out;
string Name,line;
int offset;
out.open("record.txt");
cout << "Input name: ";
getline(cin,Name);
if(out.is_open())
{
while(!out.eof())
	{
	   getline(out,line);
	   if (line.find(Name,0) != string::npos)
	   {
	   	cout << line << endl;
	   }
	}
}
out.close();
}


