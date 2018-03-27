#include<iostream>
using namespace std;
int main()
{
	int var=20;
	int *p;
	p=&var;
	cout<<"Value of var="<<var<<endl;
	cout<<"Address of var="<<p<<endl;
	cout<<"Value of *p="<<*p;
	return 0;
}
