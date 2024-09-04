#include<iostream>
using namespace std;
float area(int b,int h);
int main()
{
	int base,height;
	float ar;
	cout<<"Enter base:";
	cin>>base;
	cout<<"Enter height:";
	cin>>height;
	ar=area(base,height);
	cout<<"Area of triangle is"<<ar;
	return 0;
}
float area(int b,int h)
{
	float a;
	a=0.5*b*h;
	return a;
}
