#include<iostream>
using namespace std;
char grade(int m);
int main()
{
	int marks;
	char g;
	cout<<"Enter marks:";
	cin>>marks;
	g=grade(marks);
	cout<<"Your grade is"<<g;
	return 0;
}
char grade(int m)
{
	if(m>80)
	return'A';
	else if(m>60)
	return'B';
	else if(m>40)
	return 'C';
	else
	return'F';
}
