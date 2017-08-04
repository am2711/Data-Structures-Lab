#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cin>>a>>b>>c;

int max = (a>b) ?  ( a>c ? a : c ) : ( b>c ? b : c ) ;
int min = (a>b) ?  ( b>c ? c : b ) : ( a>c ? c : a ) ;
cout<< "The largest is "<<max<<endl;
cout<<"the Smallest is "<<min<<endl;
getch();
}