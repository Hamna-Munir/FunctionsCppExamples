#include<iostream>
using namespace std;
int gcd(int x,int y);
int main()
{
	int a,b;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	cout<<"Greatest common divisor is"<<gcd(a,b)<<endl;
	return 0;
}
int gcd(int x,int y)
{
	int g,i,n;
	if(x<y)
	n=x;
	else
	n=y;
	for(i=1;i<=n;i++)
	if(x%i==0 && y%i==0)
	g=i;
	return g;
}
