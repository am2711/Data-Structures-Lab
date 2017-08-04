#include<iostream.h>
#include<conio.h>

int Fact(int f)
{
 if(f==0)
 return 1;

 return f * Fact(f-1);

}
void main()
{
int f;
clrscr();
cin>>f;
cout<<"The Factorial of " <<f<<" is "<<Fact(f);
getch();
}