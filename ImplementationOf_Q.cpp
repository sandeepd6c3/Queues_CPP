#include<iostream>
#include<queue>
using namespace std;

class ImpQueue
{
	public:
	
	int *arr;
	int size;
	int front;
	int rear;
	
	ImpQueue(int size)
	{
		this->size = size;
		arr = new int[size];
		front = 0;
		rear = 0;
		
	}
	
	void push(int val)
	{
		if(rear == size)
		{
			cout<<"Queue is full"<<endl;
			return;
		}
		else
		{		
		 arr[rear] = val;
		 cout<<val<< " Pushed in queue "<<endl;
		 rear++;
		}
		
	}
	
	void pop()
	{
		if(front == rear)
		{
			cout<<"Queue is empty !"<<endl;
			return;
		}
		else
		{
			arr[front] = -1;
			front++;
			cout<<"the front value is pop "<<endl;
			if(front == rear)
			{
				front = 0;
				rear = 0;
			}
		}
	}
	
	int getfront()
	{
		if(front == rear)
		{
			cout<<"Queue is empty !"<<endl;
		}
		else
		{
			return arr[front];
		}
	}
	
 
	
	bool isEmpty()
	{
		if(front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	int getsize()
	{
		return rear-front;
	}
	
};

int main()
{
	 ImpQueue q(10);
	 
	 q.push(1);
	 q.push(2);
	 q.push(3);
	 
	 cout<<"Size of Queue is : "<<q.getsize() ;
	
	return 0;
}

















// #include<iostream>
// using namespace std;

// class Queue
// {
// public:

// int *arr;
// int size;
// int front;
// int rear;

// Queue(int size)
// {
// 	this->size= size;
// 	arr = new int[size];
// 	front = 0;
// 	rear = 0;
// }

// void push(int val)
// {
// 	if(rear == size)
// 	{
// 		cout<<"Q is full !"<<endl;
// 	}
// 	else
// 	{
// 		arr[rear] = val;
// 		rear++;
// 	}
// }

// void pop()
// {
// 	if(front == rear)
// 	{
// 		cout<<"Q is empty !"<<endl;
// 	}
// 	else
// 	{
// 		arr[front] = -1;
// 		front++;
		
// 		if(front == rear)
// 		{
// 			front = 0;
// 			rear = 0;
// 		}
// 	}	
// }

// int getFront()
// 	{
// 		if(front == rear)
// 	{
// 		cout<<"Q is empty !"<<endl;
// 		return -1;
// 	}
// 	else
// 	{
// 		return arr[front];
// 	}
// }

// bool isEmpty()
// {
// 	if(front == rear)
// 	{
// 		return true;
// 	}
// 	else
// 	{
// 		return false;
// 	}
// }

// int getSize()
// {
// 	return rear-front;
// }

// };

// int main()
// {
	
// 	Queue q(10);
	
// 	q.push(1);
// 	q.push(2);
// 	q.push(3);
// 	q.push(4);
// 	q.push(5);
// 	q.push(6);
// 	q.push(7);
// 	// q.push(8);
	 
// 	cout<<"Size is : "<<q.getSize()<<endl;
// 	cout<<"Final Queue is : ";
// 	while(!q.isEmpty())
// 	{
// 		cout<<q.getFront()<<" ";
// 		q.pop();
// 	}
	
// 	return 0;
// }