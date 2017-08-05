#include <iostream.h>
#include <conio.h>

void selsort(int a[], int n)
{

 for(int i=0;i<n-1;i++)
 {
 int small=a[i];
 int pos=i;
 for(int j=i+1;j<n;j++)
 {
   if(a[j]<small)
   {
    small=a[j];
    pos=j;
   }
  }
 int temp=a[i];
 a[i]=a[pos];
 a[pos]=temp;
 }
}

int main()
{
int arr[100],n;
clrscr();
cout<<"Enter length: ";
cin>>n;
cout<<"Enter array elements: ";
for(int i=0;i<n;i++)
cin>>arr[i];

selsort(arr,n);
cout<<"The sorted array is: "<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<" ";

getch();
return 0;
}