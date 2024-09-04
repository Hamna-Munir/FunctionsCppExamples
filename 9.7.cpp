#include<iostream>
using namespace std;
void prime(int num)
{
	int c,p=1;
	for(c=2;c<=num/2;c++)
	if(num%c==0)
	{
		p=0;
		break;
	}
	if(p==1)
	cout<<num<<"is a prime number.";
	else
	cout<<num<<"is a composite number.";
}
int main()
{
	int n;
	cout<<"Enter an integer:";
	cin>>n;
	prime(n);
	return 0;
}
