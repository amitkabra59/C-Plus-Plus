#include <iostream>
using namespace std;
int main()
{
  int a[100], n, i, j, temp;
 
  cout<<"Enter number of elements\n";
  cin>>n;
 
 cout<<"Enter the integers\n"<<endl;
 
 for (i = 0; i < n; i++)
 {
   cin>>a[i];}
 
  for (i = 0 ; i<n; i++)
  {
    for (j = i+1; j<n; j++)
    {
      if (a[i] > a[j]) /* For descending order use < */
      {
        temp  =  a[i];
        a[i]  =  a[j];
        a[j]  =  temp;
      }
    }
  }
 
  cout<<"Sorted list in ascending order:\n";
 
  for ( i = 0 ; i < n ; i++ ){
  
     cout<<a[i];
     cout<<"\t";}
 
  return 0;
}
