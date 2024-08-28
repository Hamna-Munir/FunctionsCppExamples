#include<iostream>
using namespace std;
void max(int a,int b);
int main()
{
	int x,y;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	max(x,y);
	return 0;
}
void max(int a,int b)
{
	if(a>b)
	  cout<<"Maxmium number is "<<a;
	else
	  cout<<"Maximum number is "<<b;  
}