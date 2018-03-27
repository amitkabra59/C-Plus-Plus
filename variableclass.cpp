#include<iostream>
#include<string>
using namespace std;
class varclass{
	public:
	void setName(string x)
	{
		name=x;
		
	}	
	string getName()
	{
		return name;
	}
	private: 
	string name;
};

int main()
{ 
     varclass obj;
     obj.setName("Hey Broda!");
     cout<<obj.getName();
	return 0;
}
