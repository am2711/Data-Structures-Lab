#include<iostream.h>
#include<conio.h>

void main()
{
 int a[10][10],b[10][10],c[10][10];
 clrscr();
 cout<<"Enter the order of the matrices \n";
 int m,n;
 cin>>n>>m;
 cout<<"Enter the elements of the first matrix\n";
 for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
      cin>>a[i][j];
 cout<<"enter the elements of second matrix\n";
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
       cin>>b[i][j];
       if(a[i][j] > b[i][j])
       {
	c[i][j] = a[i][j];
       }
       else
	c[i][j] = b[i][j];
   }
 }
 cout<<"the New matrix is \n"<<endl;
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
       cout<<c[i][j]<<" ";
    }
    cout<<endl;
 }
 getch();
}