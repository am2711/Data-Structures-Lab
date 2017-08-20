#include<iostream.h>
#include<conio.h>
class stack{
    int top;
    char s[10];
public:
    stack()
    {
    top=-1;
    }
   void push(char c);
   void display();

};
int main()
{
    stack s;
    clrscr();
    int n,base,d;
    char c;
    cout<<"Enter the decimal number:";
    cin>>n;
    cout<<"Enter the base:";
    cin>>base;
    while(n>0)
    {
	d=n%base;
	if(d>=10)
	{
	    c=(char)(d+55);
	    s.push(c);
	}
	else if(d<10)
	{
	c=(char)(d+48);
	s.push(c);
	}
	n=n/base;

    }
    cout<<"The number representation in the given base is ";
    s.display();
    getch();
    return 0;
}
void stack::push(char c)
{
    if(top>=9)
	cout<<"stack full";
    else
    {
	s[++top]=c;
    }
}
void stack::display()
{
    int i;
    for(i=top;i>=0;i--)
	cout<<s[i];
}
