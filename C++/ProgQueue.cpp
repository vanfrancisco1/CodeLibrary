#include<iostream>
#define size 5
using namespace std;


class Queue
{
	private:
		int items[size],front,rear;
	public:
		Queue()
		{
			front = -1;
			rear = -1;
		}
		bool isfull()
		{
			if (front == 0 && rear == size - 1)
			{
				return true;
			}
			return false;
		}
		bool isempty()
		{
			if (front == -1)
			{
				return true;
			}
			return false;
		}
		void Enqueue(int element)
		{
			if (isfull())
			{
				cout << "The Queue is full" << endl;
			}
			else 
			{
				if(front == -1)
				{
					front = 0;
				}
					rear++;
					items[rear] = element;
					cout << "Data Inserted " << element << endl;
			}
		}
		int Dequeue()
		{
			int element;
			if(isempty())
			{
				cout << "The Queue is Empty" << endl;
				return -1;
			}
			else
			{
				element = items[front];
				if (front >= rear)
				{
					front = -1;
					rear = -1;
				}
				else 
				{
					front++;
				}
			}
			cout <<"Data Deleted" << endl;
			return element;
		}
		void Display()
		{
			int i;
			if (isempty())
			{
				cout << "Empty Queue" << endl;
			}
			else
			{
				cout << "Front -> " << front << endl;
				cout << "Items -> ";
				for (i=front;i<=rear; i++)
				{
					cout << items[i] << endl;
				}
				cout << "Rear -> " << rear << endl;
			}
		}
};
int main()
{
	Queue q;
	q.Dequeue();
	q.Enqueue(1);
	q.Display();
	q.Enqueue(2);
	q.Enqueue(3);
	q.Enqueue(4);
	q.Enqueue(5);
	q.Enqueue(6);
	q.Display();
	q.Dequeue();
	q.Display();
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();
	q.Display();
	q.Enqueue(7);
	q.Enqueue(8);
	q.Display();
}

