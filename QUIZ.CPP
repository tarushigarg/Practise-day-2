#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<process.h>
#include<dos.h>

int a=0;
void main(){
	int c;
	clrscr();
	cout<<"Q1. Who is the prime minister of India ?"<<endl;
	cout<<"1.Indira gandhi"<<endl;
	cout<<"2.Narendra modi"<<endl;
	cout<<"3.Mahatma gandhi"<<endl;
	cout<<"4.Manmohan singh"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>c;
	if(c==2)
	{        cout<<"Correct Answer";
		a=a+20;}
	else
	{	cout<<"Wrong Answer";
		a=a-10;}
		delay(1000);
	clrscr();
	cout<<"Q2. How many strings are there in a normal guitar ?"<<endl;
	cout<<"1.two"<<endl;
	cout<<"2.ten"<<endl;
	cout<<"3.four"<<endl;
	cout<<"4.six"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>c;
	if(c==4)
	{        cout<<"Correct Answer";
		a=a+20;}
	else
	{	cout<<"Wrong Answer";
		a=a-10;}
		delay(1000);
	clrscr();
	cout<<"Q3.What is the capital of India ?"<<endl;
	cout<<"1.USA"<<endl;
	cout<<"2.Mumbai"<<endl;
	cout<<"3.Jambugoda"<<endl;
	cout<<"4.New Delhi"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>c;
	if(c==4)
	{        cout<<"Correct Answer";
		a=a+20;}
	else
	{	cout<<"Wrong Answer";
		a=a-10;}
		delay(1000);
	clrscr();
	cout<<"Q4. Who gave the theory of relativity ?"<<endl;
	cout<<"1.Max planck"<<endl;
	cout<<"2.Albert Einstien"<<endl;
	cout<<"3.Isaac Newton"<<endl;
	cout<<"4.Stephen Hawkings"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>c;
	if(c==2)
	{        cout<<"Correct Answer";
		a=a+20;}
	else
	{	cout<<"Wrong Answer";
		a=a-10;}
		delay(1000);
	clrscr();
	cout<<"Q5. Which is not a browser ?"<<endl;
	cout<<"1.Chrome"<<endl;
	cout<<"2.Opera"<<endl;
	cout<<"3.Facebook"<<endl;
	cout<<"4.Safari"<<endl;
	cin>>c;
	if(c==3)
	{        cout<<"Correct Answer";
		a=a+20;}
	else
	{	cout<<"Wrong Answer";
		a=a-10;}
		delay(1000);
	clrscr();
	cout<<"AND THE FINAL QUESTION"<<endl;
	cout<<"Q6. Who is the best singer of all time ?"<<endl;
	cout<<"1.Rakesh"<<endl;
	cout<<"2.DJ Mannu"<<endl;
	cout<<"3.Dhinchak Pooja"<<endl;
	cout<<"4.David gutta"<<endl;
	cin>>c;
	if(c==3)
	{        cout<<"Correct Answer";
		a=a+20;}
	else
	{	cout<<"Wrong Answer";
		a=a-10;}
	delay(1000);
	clrscr();
	cout<<"YOUR FINAL SCORE IS :"<<a<<" OUT OF 120"<<endl;
	getch();
}