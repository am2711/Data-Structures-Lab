#include <iostream.h>
#include <conio.h>
class time{
	int hr;
	int min;
	int sec;

	public:
	void read();
	time add(time,time);
	time difference(time,time);
	void display();
};
void time::read(){
	cout<<"Enter hours, minutes and seconds for clock: ";
	cin>>hr>>min>>sec;
}
time time::add(time t1,time t2){
	time t3;
	t3.hr=t1.hr+t2.hr;
	t3.min=t1.min+t2.min;
	t3.sec=t2.sec+t1.sec;
	if(t3.sec>59){
		t3.sec-=60;
		t3.min++;
	}
	if(t3.min>59){
		t3.min-=60;
		t3.hr++;
	}
	return t3;
}
time time::difference(time t1,time t2){
	time t3;
	if(t1.hr>t2.hr){
		t3.hr=t1.hr-t2.hr;
		t3.min=t1.min-t2.min;
		t3.sec=t1.sec-t2.sec;
		if(t3.min<0){
			t3.min+=60;
			t3.hr--;
		}
		if(t3.sec<0){
			t3.sec+=60;
			t3.min--;
		}
	}
	else{
	       t3.hr=t2.hr-t1.hr;
	       t3.min=t2.min-t1.min;
	       t3.sec=t2.sec-t1.sec;
	       if(t3.min<0){
			t3.min+=60;
			t3.hr--;
	       }
	       if(t3.sec<0){
			t3.sec+=60;
			t3.min--;
	       }
	}
	return t3;
}
void time::display(){
	cout<<hr<<" hr "<<min<<" min "<<sec<<" sec ";
}
void main()
{
	clrscr();
	time t1,t2,t3;
	int choice;
	t1.read();
	t2.read();
	cout<<"1.Add\n2.Difference\nYour choice: ";
	cin>>choice;
	if(choice==1){
		t3=t3.add(t1,t2);
		t3.display();
	}
	else if(choice==2){
		t3=t3.difference(t1,t2);
		t3.display();
	}
	getch();
}