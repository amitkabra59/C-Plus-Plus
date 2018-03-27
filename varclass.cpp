#include<iostream>
#include<string>
using namespace std;
class varclass{
	public:
	void setname(string x)
	{
		name=x;
		
	}	
	void getname()
	{
		return name;
	}
		
	private: 
	string name;
};
int main()
{ 
     varclass obj;
     obj.setname("Hey Broda!");
     cout<<obj.getname();
	return 0;
}
