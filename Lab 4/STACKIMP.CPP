#include <conio.h>
#include <iostream.h>
class stack{

private:

int s[10];

int top;

public:

stack()

{

top= -1;

}

void push(int n)

{

if(top==9)

{

cout<<"Stack overflow...";

return;

}

top= top + 1;

s[top]= n;

}

int pop()

{

int data;

if(top == -1)

{

cout<<"Stack underflow...";

return NULL;

}

data= s[top];

top=top-1;

return data;

}
void print();
};
void stack::print()
{

if(top== -1)

{

cout<<"Stack is empty...";

return;

}

else

for (int i=0; i<=top; i++)

cout<<s[i]<<endl;

}

void main(){

int val, option;

stack obj;

while (option!=3)

{
clrscr();

cout<<"Press 1: for Push"<<endl

<<"Press 2: for Pop" <<endl

<<"Press 3: for exit"<<endl;

cin>>option;

switch (option)

{

case 1:

cout<<"Enter value to be inserted ";

cin>>val;

obj.push(val);

cout<<"Stack after insertion: "<<endl;

obj.print();
cout<<"Press any key to restart";
break;

case 2:

cout<<"Value " <<obj.pop()<<" is deleted "<<endl;

cout<<"Stack after deletion: ";

obj.print();
cout<<endl;
cout<<"Press any key to restart";

break;

}

getch();

}}