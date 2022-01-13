#include <iostream>
using namespace std;
void even_odd(int a);
int main()
{int n;
cout<<"Enter the number:"<<endl;
cin>>n;
even_odd(n);
    return 0;
}
void even_odd(int a)
{
    if(a%2==0)
    cout<<"Even number"<<endl;
    else
    cout<<"odd number"<<endl;
}