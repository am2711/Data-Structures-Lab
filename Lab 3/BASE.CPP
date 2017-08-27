#include <iostream.h>
#include<conio.h>
#include <stdio.h>
class stack{
	private:

		int top;
		char stck[50];
	public:

		stack(){
			top=-1;
		}
		void push(char);
		char pop();
		int isEmpty();
};
void stack::push(char a){
	if(top!=50)
		stck[++top]=a;
	else
		cout<<"Stack is full";
}
char stack::pop(){
	char popped;

	if(top!=-1){
		popped=stck[top--];
	}
	else{
		cout<<"Stack empty";
		return '0';
	}
	return popped;
}
int stack::isEmpty(){
	if (top<0)
		return 1;
	else
		return 0;
}
void main(){
	clrscr();
	int number,base,count=0;
	stack s;
	cout<<"enter number and base "<<endl;
	cin>>number>>base;
		while(number!=0){
		count++;
		if(number%base>9){
			s.push((char)(number%base + 55));
		}
		else {
			s.push((char)(number%base + 48));
		}
		number/=base;
		}

	/*while(number!=0){
		count++;
		s.push(number%base);
		number/=base;
		}*/
	for(int i=0;i<count;i++){
		cout<<s.pop();
	}
	getch();
}




