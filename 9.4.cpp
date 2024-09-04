#include<iostream>
using namespace std;
void value(int);
int main()
{
	int x;
	cout<<"Enter an integer:";
	cin>>x;
	value(x);
	return 0;
}
void value(int x)
{
	int p,n;
	p=x-1;
	n=x+1;
	cout<<"The number before"<<x<<"is"<<p<<endl;
	cout<<"The number after"<<x<<"is"<<n<<endl;
}
