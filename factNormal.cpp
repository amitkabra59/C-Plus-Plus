//Normal Factorial


#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"enter number=";
	cin>>n;
    while(n!=0)
	{
		i=n;
		fact=fact*i;
		n--;
	}
	cout<<"The factorial is="<<fact;
	
}
