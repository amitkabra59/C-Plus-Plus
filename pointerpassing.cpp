#include<iostream>
using namespace std;
void PassValue(int x);
void PassReference(int *y);
int main()
{
	int ankit=5;
	int ritu=13;
	PassValue(ankit);
	PassReference(&ritu);
	cout<<"Ankit="<<ankit<<endl;
	cout<<"Ritu="<<ritu;
}
    void PassValue(int x)
    {
    	x=99;
	}
	void PassReference(int *y){
		*y=55;
		
	}
