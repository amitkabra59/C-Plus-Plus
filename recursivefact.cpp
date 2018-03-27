#include<iostream>
using namespace std;
int n;
int fact(int x)
{
	if(x==1){
		return 1;
	} else
    return x*fact(x-1);	
}
int main()
{    cout<<"enter a no"<<endl;
     cin>>n;
	cout<<fact(n);
	return 0;
}
