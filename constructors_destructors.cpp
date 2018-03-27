#include<iostream>
using namespace std;
class tuna{
	public: tuna();
	       ~tuna();
};
int main()
{
	tuna to;
	cout<<"Is it the end?"<<endl;

}

tuna::tuna(){
	cout<<"I am the constructor"<<endl;
	
}
	tuna::~tuna()
{
	cout<<"Iam the destructor";
}

