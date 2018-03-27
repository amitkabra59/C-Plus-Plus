#include<iostream>
using namespace std;
int main()
{
	int x,m=0,n,sum=0;
	cout<<"enter the no:\n";
	cin>>x;
	while(x!=0)
	{
	m=x%10;
	sum=sum+m;
	m=x/10;
	x=m;}
	
	cout<<"Sum of digits="<<sum;
	return 0;
}
