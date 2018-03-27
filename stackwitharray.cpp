#include<iostream>
using namespace std;
class Stack{
 int stack[10],top;
 public:
 	Stack()
 	{ 
 	top=-1;
 		
	 }
	 void push(int i)
	 {
	 	if(top>4){
	 	cout<<"Stack overflows"<<endl;
	 	return; }
	 	stack[++top]=i;
	 	cout<<"Inserted element is:"<<i;
	 }
     void pop()
     {
     	if(top<0){
     		cout<<"Stack underflow:"<<endl;
     		return;
		 }
		 cout<<"deleted element is:"<<stack[top--]<<"  "<<endl;
	 }
	 void display()
	 {
	 	if(top<0){
		 
	 	cout<<"Stack is empty";}
	 	for(int i=top;i>=0;i--)
	 	{
		 cout<<stack[i]<<endl;
		 }
	 	
	 }
};
int main()
{ int ch,n;
  Stack obj;
   while(1)
	{
		cout<<"Enter \n 1.Inserting \n 2.Deleting \n 3.Displaying \n 4.Exit "<<endl;
		cin>>ch;
		switch(ch){
			case 1: {
				    cout<<"Pushing the element?";
			        cin>>n;
			        obj.push(n);
			        break;}
			case 2: {
			        obj.pop();
			        break;}
			case 3: obj.display();
			break;
			case 4: exit(0);
			break;
			default:
			cout<<"Invalid no";
			break;          
			
			}
		}
	return 0;
}
