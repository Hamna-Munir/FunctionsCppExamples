#include<iostream>
using namespace std;
void shape(int,char);
int main()
{
	int num;
	char ch;
	cout<<"\nEnter a number:";
	cin>>num;
	cout<<"Enter a character:";
	cin>>ch;
	shape(num,ch);
	return 0;
}
void shape(int n,char c)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		cout<<endl;
		for(j=1;j<=n;j++)
		cout<<c;
	}
}
