//Swapping
#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"Enter the numbers";	
cin>>x;
cin>>y;
cout<<"x="<<x<<"\n y="<<y;
z=x; //Z is temporary Variable
x=y;
y=z;
cout<<"\n After swapping!\n";
cout<<"x="<<x<<endl;
cout<<"y="<<y;
}
