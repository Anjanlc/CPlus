
#include<iostream> 
#define MAX 100 
using namespace std; 

class Queue{ 
	int rear, front; 
	int arr[MAX]; 
public: 
	Queue(){ 
		front = rear = -1; 
	} 

	void enqueue(int x); 
	int dequeue(); 
	void display(); 
}; 
void Queue::enqueue(int x) 
{ 
	if (rear == MAX - 1) 
	{ 
		cout<<"Queue Overflow"<<endl; 
		return; 
	} 

	if (front == - 1) 
		front = 0; 

	arr[rear++] = x; 
	cout<<x<<" "<<endl; 
} 
int Queue::dequeue() 
{ 
	if (front == - 1 || front > rear) 
	{ 
		cout<<"Queue Underflow "; 
		return 0; 
	} 

	int x = arr[front]; 
	cout<<x<<" "<<endl; 

	front++; 
	if (front > rear) 
		front = rear = - 1; 
	return x; 
} 

void Queue::display() 
{ 
	if (front == - 1) 
	{ 
		cout<<"Queue is Empty"<<endl; 
		return; 
	} 
	cout<<"Queue elements are: "; 
	for (int i = front; i <= rear; i++) 
		cout<<arr[i]<<" "; 
	cout<<endl; 
} 
int main() 
{ 
	Queue q; 
	q.enqueue(14); 
	q.enqueue(22); 
	q.enqueue(13); 
	q.display(); 
	cout<<"Deleted value = "<<q.dequeue()<<endl; 
	cout<<"Deleted value = "<<q.dequeue()<<endl; 
    q.display(); 
    q.enqueue(9); 
	q.enqueue(20); 
	q.enqueue(5); 

	q.display(); 

	return 0; 
}