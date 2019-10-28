#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	char line[250];
	int vowels = 0,symbols = 0,consonants = 0,spaces=0,words = 1;
	cout << "Enter a sentence: " << endl;
	cin.getline(line,250);
	for(int i = 0; line[i]!='\0'; ++i)
	{
		if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
           {
           	 ++vowels;
		   }
		else if ((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
		{
			 ++consonants;	
		}
		else if (line[i]=='.' || line[i] ==',')
		{
			++symbols;
		}
		else if (line[i]==' ')
        {
            ++spaces;
        }
	}
	for (int z = 0; z<strlen(line);z++)
	{
		if (line[z] == ' ')
		{
			++words;
		}
	}
		cout << " # of consonants are " << consonants << endl;
		cout << " # of vowels are " << vowels <<endl;
		cout << " # of symbols are " << symbols << endl;
		cout << " # of spaces are " << spaces << endl;
		cout << " # of words are " << words;
		
}
