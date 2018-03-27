#include<iostream>
using namespace std;
class shape{
	public:
	void setwidth(int x){
		width=x;
	}
	void setheight(int y){
		height=y;
	}
	int getarea(){
		
		return (width*height);
	}
	protected: 
	int width;
	int height;
   };
   
int main()
{ shape obj;
  obj.setwidth(5);
  obj.setheight(6);
  cout<<obj.getarea();
	return 0;
}
