#include<iostream>
using namespace std;
int main()
{
 int x=0,y=1,n,z;
 cout<<"Enter limit= \t";
 cin>>n;
 cout<<x<<y;
 for(int i=0;i<(n-2);i++)
{
 z=x+y;	
 cout<<z;
 x=y;
 y=z;
}
return 0;
}
