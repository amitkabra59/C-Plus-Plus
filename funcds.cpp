#include<iostream>
#include<cstring>
using namespace std;
void printbook(struct books book);

	struct books{
	char tittle[50];
	char author[50];
	char sub[50];
	int book_id;	
	};
	
int main()
{
	struct books book1;
	struct books book2;
	
	//book1
	strcpy(book1.tittle,"CPP Book \n");
	strcpy(book1.author,"Mr Kenedy \n");
	strcpy(book1.sub,"CSE \n");
	book1.book_id=275; 
	
	//book2
	strcpy(book2.tittle,"AE theory \n");
	strcpy(book2.author,"Mr Loser \n");
	strcpy(book2.sub,"ECE \n ");
	book2.book_id=420;
	
	//print book1 and book2
	printbook(book1);
	printbook(book2);
		return 0;
}
	
	void printbook(struct books book)
{
		cout<<book.tittle<<book.author<<book.sub<<book.book_id<<endl;

}
