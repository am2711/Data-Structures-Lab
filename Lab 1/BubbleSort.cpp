   #include<iostream.h>
   #include<conio.h>

   void main()
   {
   int a[10],n,i;
   clrscr();
   cout<<"enter the number of elements\n";
   cin>>n;
   cout<<"enter the elements\n";
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0 ; i<n-1 ; i++)
    {
      for(int j=0 ; j<n-i-1;j++)
	{
	  if(a[j] > a[j+1]
	  {
	   int temp = a[j];
	   a[j] = a[j+1];
	   a[j+1] = temp;
	  }
	}
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<"  ";
    getch();
 }