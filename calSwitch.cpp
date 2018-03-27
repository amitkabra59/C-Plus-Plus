#include<iostream>
using namespace std;
int main()
{
int x,y,n,ch;
cout<<"Enter the numbers"<<endl;	
cin>>x>>y;
cout<<" Enter \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division";
cin>>ch;
switch (ch){
	case 1: if(ch==1) {
	cout<<"\n Addition = "<<x+y;
	break;}
		case 2: 
		if (ch==2){
		cout<<"Subtraction = "<<x*y;
	break;}
		case 3: 
		if(ch==3){
		cout<<"multiplication = "<<x*y;
	break; }
	case 4: 
	if(ch==4)
	{
	cout<<"Division = "<<float(x)/y;
	break;}
	else
	default:
		cout<<"Invalid input ass";
		break;
	
	
}
}
