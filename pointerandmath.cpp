#include<iostream>
using namespace std;
int main()
{   int array[5];
	int *a1=&array[1];
	int *a2=&array[2];
	int *a3=&array[3];
	cout<<a1<<endl;
	cout<<a2<<endl;
	cout<<a3;
	a1+=2;
	cout<<"\n"<<a1;
	return 0;
}
