#include <iostream>
using namespace std;
int cube(int a);
int main()
{
  int a;
  cout<<"Enter the number:"<<endl;
  cin>>a;
  cout<<"cube of the number is:"<<cube(a); 
  return 0; 
} 
int cube(int a)
{
    return(a*a*a);
}