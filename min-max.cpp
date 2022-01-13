#include <iostream>
using namespace std;
int max_min(int a,int b);
int main()
{
    int a,b;
    cout<<"enter the two numbers:"<<endl;
    cin>>a>>b;
cout<<"maximum of two numbers is:"<<max_min(a,b);
}
int max_min(int a,int b)
{
    int c=a>b?a:b;
    return c;
}