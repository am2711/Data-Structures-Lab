#include<iostream.h>
#include<conio.h>

int Fib(int n)
{
if(n<2)
return n;

return Fib(n-1) + Fib(n-2);

}
void main()
{
 int n;
 clrscr();
 cin>>n;
 for(int i=0 ; i<n ;i++)
 cout<<Fib(i)<<"  ";
 getch();
}
