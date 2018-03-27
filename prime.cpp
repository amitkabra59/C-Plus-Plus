#include<iostream>
 
using namespace std;
 
int main()
 {
 
     int num,count=0;
     cout<<"Enter the number to check : ";
     cin>>num;
 
     for(int i=2;i<num;i++)        
 
         {
            if(num%i==0)       // checks if the number is fully divisible or not
             {
               count++;
             }
         }
            if(count==0)
             {
               cout<<"It is a Prime Number \n";
             }
            else
             {
              cout<<"It is not a Prime Number \n";
             }
 
           }
