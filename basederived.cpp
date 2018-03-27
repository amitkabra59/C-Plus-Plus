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
	
	protected: 
	int width;
	int height;
   };
   class rectangle: public shape
   {public:
   int getarea(){
		
		return (width*height);}
   };
   
int main()
{ rectangle obj;
  obj.setwidth(5);
  obj.setheight(6);
  cout<<obj.getarea();
	return 0;
}
