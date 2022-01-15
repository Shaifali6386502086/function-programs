#include <iostream>
using namespace std;
void strong(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter the range of number:"<<endl;
    cin>>a>>b;
    strong(a,b);
    return 0;
}
void strong(int a,int b)
{int rem,sum=0;
for(int i=a;i<=b;i++)
{
    int n=i;
    while(n!=0)
    {
        rem=n%10;
       int fact=1;
       for(int j=1;j<=rem;j++)
       {
           fact=fact*j;
       }
       sum=sum+fact;
       
        n=n/10;

    }
if(sum==i)
    cout<<"number is strong:"<<endl;
    
}
}