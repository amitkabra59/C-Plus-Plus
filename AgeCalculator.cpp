#include<iostream>
using namespace std;
int main(){
cout<<"*********************C++ code for age calculator ************************\n";
cout<<"Enter the date of birth in Year/Month/Date format";
int y1,m1,d1;
int y2,m2,d2;
int yr0;
int month,m;
cin>>y1>>m1>>d1;
cout<<"Enter today's date";
cin>>y2>>m2>>d2;
if((y1*100+m1*50+d1*10)>(y2*100+m2*50+d2*10))
{                                                           //Check if the year for bday is less than today date 
cout<<"Error";
exit(0);
}

else 
{
cout<<"Your bday date is : "<<y1<<"/"<<m1<<"/"<<d1<<endl;	
cout<<"Today is : "<<y2<<"/"<<m2<<"/"<<d2<<endl; }
                                                  //count years
if(m2>m1)
{
	yr=y2-y1;
}
if(m1<m2){
yr=y2-y1-1;}
if(m1==m2){
	if(d1>d2){
	yr=y2-y1-1;
	}
	else
	yr=y2-y1;
}
cout<<"Number of years : "<<yr;
return 0;
}

