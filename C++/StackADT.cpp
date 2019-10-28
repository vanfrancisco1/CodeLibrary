#include<iostream>
using namespace std;

class ADTstack
{
int size = 0,counter,Length,top;
public: 
	void Push(int val,int Stack[])
	{
	 size++;
	 Stack[counter] = val;
	 top = Stack[counter];
	 counter++;
	}
	int Pop(int Stack[])
	{
		int temp;
		if(size == 0)
		{
			return 0;
		}
		temp = Stack[counter];
		--counter;
		return temp;
	}
	int Peek()
	{
		return top;
	}
	void IsEmpty()
	{
		if (Size() == 0)
		{
			cout << "The stack is empty" << endl;
		}
		else
		{
			cout << "The stack is not empty" << endl;
		}
	}
	void IsFull()
	{
		if (Length == Size())
		{
			cout << "The Stack is full" << endl;;	
		}
		else if (Length != Size())
		{
			cout << "The Stack is not full" << endl;;
		}
	}
	int Size()
	{
	 return size; 
	}
	void length(int Stacklength)
	{
	Length = Stacklength;
	}
};
int main()
{
ADTstack st;
int length,val;
cout << "Enter length of array:";
cin >> length;	
st.length(length);	
int numstack[length];
cout << "Enter value: ";
cin >> val;
st.Push(val,numstack);
st.Push(2,numstack);
st.Push(4,numstack);
st.Push(6,numstack);
st.Push(8,numstack);


cout << "The size of the stack is " << st.Size() << endl;
st.IsFull();
st.IsEmpty();
cout << "The current top is " << st.Peek() << endl;
st.Pop(numstack);
cout << "The current top is " << st.Peek() << endl;

}
