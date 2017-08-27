#include<iostream.h>
#include<conio.h>
class Queue
{  public:
    int rear, front;
    int size;
    int *arr;

    Queue(int s)
    {
       front = rear = -1;
       size = s;
       arr = new int[s];
    }

    void in(int value);
    int del();
    void display();
};
void Queue::in(int value)
{
    if ((front == 0 && rear == size-1) || (rear == front-1))
    {
	cout<<"\nQueue Full";
    }

    else if (front == -1)
    {
	front = rear = 0;
	arr[rear] = value;
    }

    else if (rear == size-1 && front != 0)
    {
	rear = 0;
	arr[rear] = value;
    }

    else
    {
	rear++;
	arr[rear] = value;
    }
}
int Queue::del()
{
    if (front == -1)
    {
	cout<<"\nQueue Empty";
	return 0;
    }

    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
	front = -1;
	rear = -1;
    }
    else if (front == size-1)
	front = 0;
    else
	front++;

    return data;
}


void Queue::display()
{
    if (front == -1)
    {
	cout<<"\nQueue is Empty";

    }
    cout<<"\nElements in Circular Queue are: ";
    if (rear >= front)
    {
	for (int i = front; i <= rear; i++)
	    cout<<arr[i];
    }
    else
    {
	for (int i = front; i < size; i++)
	    cout<<arr[i];

	for (int j = 0; j <= rear; j++)
	    cout<<arr[j];
    }
}

void main()
{
    clrscr();
    Queue q(5);
    cout<<"inserting elements";
    q.in(14);
    q.in(22);
    q.in(13);
    q.in(-6);
    q.display();
    cout<<"\nDeleted value = "<<q.del();
    cout<<"\nDeleted value = "<<q.del();

    q.display();
    cout<<"Inserting"<<endl;
    q.in(9);
    q.in(20);
    q.in(5);
    q.display();

    q.in(20);
    getch();
}
