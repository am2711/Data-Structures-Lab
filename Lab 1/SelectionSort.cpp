#include <iostream.h>
#include <conio.h>
void main()
{
	int size,arr[50],i,j,temp;
	clrscr();
	cout<<"Enter array size: ";
	cin>>size;
	cout<<"Enter array elements";
	for(i=0;i<size;i++)
		cin>>arr[i];
	cout<<"Sorting array using Selection Sort: \n";
	for (i=0; i < size; i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"New array after sorting: \n";
	for (i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
getch();
}