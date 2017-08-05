#include <iostream>
#include <conio.h>

void insort(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
    int j=i+1;
 }

}

int main()
{
int a[100],n;
clrscr();
cout<<"Enter size of array: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
	cin>>a[i];
cout<<"The sorted array is: ";
insort(a,n);
for(i=0;i<n;i++)
	cout<<a[i]<<" ";
getch();
return 0;
}