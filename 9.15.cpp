#include<iostream>
using namespace std;
int sqr(int n);
int cube(int n);
int main()
{
	int a,b,r;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	r=sqr(a)+cube(b);
	cout<<"Result="<<r<<endl;
	return 0;
}
int sqr(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
