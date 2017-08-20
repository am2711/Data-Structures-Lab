#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define q_size 20
class queue{
	int front,rear;
	int q[20];
	public:
	void insertq(int item);
	int delq();
	void display();
	queue()
	{
	  front=0;
	  rear=-1;
	}
	 };

void queue::insertq(int item)
	{
	  if(rear==q_size-1)
	  {
	    cout<<"Queue Overflow";
	    return;
	  }
	rear=rear+1;
	q[rear]=item;
	}

int queue::delq()
	{
	  if(front>rear)
	    return -1;
	   return q[front++];
	}

void queue::display()
	{
	int i;
	if(front>rear)
	 {
	   cout<<"Empty queue \n";
	   return;
	 }
	 cout<<"Contents: "<<endl;
	 for(i=front;i<=rear;i++)
	 cout<<q[i];
	 cout<<endl;
	}

void main()
{
   int option,val;
   queue kyu;
   clrscr();
   while(option!=4)
   {
   cout<<"Enter 1 to enqueue \n";
   cout<<"Enter 2 to dequeue \n";
   cout<<"Enter 3 to display \n";
   cout<<"Enter 4 to exit \n";
   cin>>option;
   switch(option)
   {
    case 1:
       cout<<"Enter a value to insert: ";
       cin>>val;
       kyu.insertq(val);
       break;
    case 2:
       kyu.delq();
       break;
    case 3:
       kyu.display();
       break;
    case 4:
     exit(0);
     }
   }
   getch();
}
