#include<iostream>
#include<queue> 
using namespace std;
 
int main()
{
	// STL in Queues 
	
	queue<int> q;
	
	// Insertion
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	// size
	
	cout<<"Size of Queue : "<<q.size()<<endl;
	
	q.pop();
	
	cout<<"Size of Queue : "<<q.size()<<endl;
	
	// Empty

	if(q.empty())
	{
		cout<<"Queue is empty "<<endl;
	}
	else
	{
		cout<<"Queue is not empty !"<<endl;
	}
	 
	
	return 0;
}