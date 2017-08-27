#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class student{
	char name[20];
	int rno;
	char grade;

	public:
	void read(student *,int);
	void display(student *,int);
	void sort(student *,int);

};
void student::read(student s[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Student name: ";
		gets(s[i].name);
		cout<<"Enter roll number: ";
		cin>>s[i].rno;
		cout<<"Enter grade: ";
		cin>>s[i].grade;
	}
}
void student::display(student s[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nRoll no.: "<<s[i].rno<<"\nName: ";
		puts(s[i].name);
		cout<<"Grade: "<<s[i].grade;
	}
}
void student::sort(student s[],int n)
{
	int i,j;
	student temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(s[j].rno>s[j+1].rno)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
}
void main()
{
	clrscr();
	student s,s1[10];
	int n;
	cout<<"Enter the number of students: ";
	cin>>n;
	s.read(s1,n);
	s.sort(s1,n);
	cout<<"\nSorted list is: \n";
	s.display(s1,n);
	getch();
}