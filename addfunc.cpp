#include<iostream>
using namespace std;
int add(int x, int y)
{
 return x+y;
}
int main()
{
 int a,b,sum;
 cout<<"a,b?";
 cin>>a>>b;
 sum=add(a,b);
 cout<<sum;
 return 0;
}



