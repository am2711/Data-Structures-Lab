#include<iostream.h>
#include<conio.h>
#include<Math.h>
void main()
{
double a,b,c;
int p;
double q,r;
clrscr();
cout<<"enter the coeff of the quadratic equations\n";
cin>>a>>b>>c;
int k = (b * b) - (4 * a * c);
if(k>0)
p=1;
else if(k<0)
p=-1;
else
p=0;
switch(p)
{
 case 1:
 q = (-b + sqrt(k))/(2*a);
 r = (-b - sqrt(k))/(2*a);
 cout<<"The roots are "<<q<< "  " <<r;
 break;
 case 0:
 cout<< " the roots are " << -b/(2*a)<< "  " << -b/(2*a);
 break;
 case -1:
 cout<<"The roots are " << -b/(2*a)<<" + "<<sqrt(-1*k)/(2*a)<<"i"<<" and "<<-b/(2*a)<<" - "<<sqrt(-1*k)/(2*a)<<"i";
 break;
}
getch();
}
