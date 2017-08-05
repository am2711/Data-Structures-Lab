#include <iostream.h>
#include <conio.h>

int strln(char a[])
{
int i=0;
while(a[i]!='\0')
i++;
return i;
}

void strcat(char a[], char b[])
{
 int i=strln(a);
 for (int j=0;b[j]!='\0';i++,j++)
 a[i]=b[j];
 a[i]='\0';
}

int strcmp(char a[], char b[])
{
 for(int i=0,j=0; a[i]!='\0'|| b[j]!='\0'; i++,j++)
 {
 if(a[i]==b[j])
 {
 continue;
 }
 if(a[i]>b[j])
  return 1;
 if(a[i]<b[j])
  return -1;
 }
 return 0;
}

void strins(char a[], char b[], int pos)
{
int l=strln(b);
for(int i=strln(a);i>pos-1;i--)
a[i+l]=a[i];
int j=0;
for(i=pos;i<pos+l;i++,j++)
a[i]=b[j];
}

void strdel(char a[], char b[])
{
 for (int i=0; a[i]!='\0';i++)
 {
 if (a[i]==b[0])
 {
 for (int j=0;b[j]!='\0';j++)
 {
 if(a[j+1]!=b[j])
 break;
 }
 int pos=i;
 }
 }

}


int main()
{
int o;
char s1[100],s2[100],s3[100];
clrscr();

cout<<"Options: \n ";
cout<<"Enter 1 to find the string length: \n";
cout<<"Enter 2 to concatenate two strings: \n";
cout<<"Enter 3 for string comparision: \n";
cout<<"Enter 4 to insert a substring: \n";
cout<<"Enter 5 for substring deletion: \n";
cin>>o;
switch(o)
{
case 1:
		cout<<"Enter the string: \n";
		cin.ignore();
		cin.get(s1,100);
		cout<<"The length of the string is: "<<strln(s1)<<endl;
		break;

case 2:
		cout<<"Enter first string: ";
		cin.ignore();
		cin.get(s1,100);
		cout<<"Enter second string: ";
		cin.ignore();
		cin.get(s2,100);
		strcat(s1,s2);
		cout<<"The new string after concatation is: ";
		for(int i=0;s1[i]!='\0';i++)
		cout<<s1[i];
		break;
case 3:
		cout<<"Enter first string to compare: ";
		cin.ignore();
		cin.get(s1,100);
		cout<<"Enter second string to compare: ";
		cin.ignore();
		cin.get(s2,100);
		int k=strcmp(s1,s2);
		if(k==1)
		cout<<"String 2 is alphabetically higher than String 1";
		if(k ==-1)
		cout<<"String 1 is alphabetically higher than String 2";
		if(k==0)
		cout<<"Identical Strings";
		break;

case 4:
		cout<<"Enter orignal string: ";
		cin.ignore();
		cin.get(s1,100);
		cout<<"Enter substring to insert: ";
		cin.ignore();
		cin.get(s2,100);
		cout<<"Enter position: ";
		int pos;
		cin>>pos;
		pos--;
		strins(s1,s2,pos);
		for(i=0;s1[i]!='\0';i++)
		cout<<s1[i];
		break;

case 5:
		cout<<"Enter string: ";
		cin.ignore();
		cin.get(s1,100);
		cout<<"Enter substring: ";
		cin.ignore();
		cin.get(s2,100);
		strdel(s1,s2);
		cout<<"The new string is: "<<endl;
		for(i=0;i<strln(s1);i++)
		cout<<s1[i];
		break;
}
getch();
return 0;
}

