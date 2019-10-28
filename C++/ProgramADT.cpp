#include<iostream>
using namespace std;

class Array1D
{
private:
int capacity;
int size;
int array[10];
public:
int counter;
Array1D()
{
	counter = 0;
	size = 0;
}
~Array1D()
{ delete [] array;}

int Getsize()
{
return size;
}
bool isEmpty()
{
	if (size <= 0)
	{
		cout << "The array is empty" << endl;
		return true;
	}
	else
	{
		cout << "The array is not empty" << endl;
		return false;
	}
}
bool isFull()
{
	if (size >= 10)
	{
		cout << "The array is full" << endl;
		return true;
	}
	else
	{
		cout << "The array is not full" << endl;
		return false;
	}
}
void InsertItem(int pos,int val)
{
	for( int i=Getsize(); i>pos; i--)
	{
		array[i]=array[i-1];
	}
	array[pos] = val;
	size++;
}

void RemoveItem(int pos)
{
	for (int i = pos; i < Getsize()-1;++i)
	{
    array[i] = array[i + 1];
	}
	size--;
}
void AddItem(int val)
{
	array[counter] = val;
	cout << "element " << val << " has been added" << endl;
	counter++;
	size++;
}
void DisplayElements()
{
	for (int x = 0; x<Getsize() ;x++)
	{
		cout <<" "<< array[x];
	}
	cout << "\n";
}
};


int main()
{
	int pos,element;
	Array1D Ar;
    Ar.isEmpty();
    Ar.AddItem(10);
    Ar.AddItem(20);
    cout << "The current elements included in the array is:" << endl;
	Ar.DisplayElements();
    Ar.isEmpty();
    Ar.isFull();
    Ar.AddItem(30);
    Ar.AddItem(40);
    Ar.AddItem(50);
    Ar.AddItem(60);
    Ar.AddItem(70);
    Ar.AddItem(80);
    Ar.AddItem(90);
    Ar.AddItem(100);
    Ar.isFull();
	cout <<"The current size of the Array is "<< Ar.Getsize() << endl;
	cout << "The current elements included in the array is:" << endl;
	Ar.DisplayElements();
	cout << "Enter element index needs to be deleted: ";
	cin >> pos;
	Ar.RemoveItem(pos);
	cout <<"The current size of the Array is "<< Ar.Getsize() << endl;
	Ar.DisplayElements();
	cout << "Element that will be inserted: ";
	cin >> element;
	cout << "Enter element index where it needs to be inserted: ";
	cin >> pos;
	Ar.InsertItem(pos,element);
	cout <<"The current size of the Array is "<< Ar.Getsize() << endl;
	Ar.DisplayElements();
	return 0;
}
