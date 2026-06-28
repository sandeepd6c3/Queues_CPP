// #include<iostream>
// #include<queue>
// using namespace std;

// int main()
// {
	
	
// 	queue<int> q;
	
// 	q.push(10);
// 	q.push(20);
// 	q.push(30);
// 	q.push(40);

	
	
// 	cout<<"Size of queue is: "<<q.size()<<endl;
	
// 	return 0;
// }




#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

int main()
{
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	
	// cout<<q.pop()<<endl;
	cout<<q.size();
	return 0;
}