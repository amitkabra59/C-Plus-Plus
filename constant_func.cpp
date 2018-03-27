#include<iostream>
using namespace std;
class shit{
	public: 
	shit::printshit(){
	cout<<"This is regular function";
}

shit::conshit() const{
cout<<"This is constant function";
}
	        
};
int main()
{  shit regshit;
   regshit.printshit();
   const shit constantshit;
   constantshit.conshit()const;
}


