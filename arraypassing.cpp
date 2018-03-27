#include<iostream>
using namespace std;
void PrintArray(int array[],int size);
int main()
{
	int ankit[5]={2,3,4,5,6};
	PrintArray(ankit,5);
}
    void PrintArray(int array[],int size)
    {
    	for(int i=0;i<size;i++)
    	cout<<array[i];
	}
