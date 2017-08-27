#include<iostream.h>
#define MAX 100
#include<string.h>
#include<stdio.h>
#include<conio.h>

class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack

    Stack()  { top = -1; }
    void push(int x);
    int pop();
};

void Stack::push(int x)
{
    if (top >= MAX)
    {
	cout << "Stack Overflow";
    }
    else
    {
	a[++top] = x;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
	return 0;
    }
    else
    {
	int x = a[top--];
	return x;
    }
}
void main()
{
	clrscr();
    Stack s1,s2;
    char a[30], b[30];
    cout<<"enter string"<<endl;
    gets(a);
    int len=strlen(a);
    for(int i=0;i<len;i++){
	    s1.push(a[i]);

    }
    for(int j=0;j<len;j++){
	    b[j]=s1.pop();


    }


    if(!strcmp(a,b)){
	    cout<<"Palindrome";
    }
    else{
	    cout<<"Not Palindrome";
    }
    getch();
}
