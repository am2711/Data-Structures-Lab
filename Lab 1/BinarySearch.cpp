#include<iostream.h>
#include<conio.h>

int Bin(int a[],int start,int end,int key)
{
if(start<=end)
 { int mid = (start+end)/2;

  if(a[mid]==key)
     return mid;
  else if (a[mid] >key)
     return Bin(a,start,mid-1,key);
  else

     return Bin(a,mid+1,end,key);
 }
  else
  return -1;
}

void main()
{
 int a[20],n,key,i,j;
 clrscr();
 cout<<"enter the number of elements\n";
 cin>>n;
 cout<<"enter the elements\n";
 for(i=0;i<n;i++)
   cin>>a[i];
 cout<<"enter the element to be searched for\n";
 cin>>key;
 j = Bin(a,0,n-1,key);
 if(j== -1)
 cout<<"element not found\n";
 else
 cout<<"element found at position " << j+1;
 getch();
 }