#include<iostream>
using namespace std;
class classprogram{
	public:
	int shit(int x,int y)
	{
		return x+y;
	}
}; 
int main()
{
	int a,b,ans;
	classprogram okay;
	cout<<"a,b?";
	cin>>a>>b;
	ans=okay.shit(a,b);
	cout<<ans;
}
