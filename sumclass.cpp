#include<iostream>
#include<string>
using namespace std;
class maths{
	int x,y;
    public:
	void input()
	{
	cout<<"x,y? \n";
	cin>>x;
	cin>>y;
}
    int add()
    {
    	cout<<"\n Addition="<<x+y;
	}
	int sub()
	{
		cout<<"\n Subtraction="<<x-y;
		
	}
	int mul()
	{
		cout<<"\n mul="<<x*y;
		
	}
	int div()
	{
		cout<<"\n div="<<(float)x/y;
	}
	};

int main()
{ 
 maths obj;
 obj.input();
 obj.add();
 obj.sub();
 obj.mul();
 obj.div();
 return 0;
}
