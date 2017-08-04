#include<iostream.h>
#include<conio.h>

void main()
{
int a[10],key,n,flag=0;
clrscr();
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements of the array \n";
for(int i=0 ; i<n ; i++)
cin>>a[i];

cout<<"enter the element to be found\n";
cin>>key;
for(int j=0; j<n;j++)
  {
if(a[j] == key)
    {
      flag = 1;
      cout<<"the element found at position "<<j+1<<endl;
    }
  }
if(flag==0)
cout<<"element Not found\n";
getch();
}