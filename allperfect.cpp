#include <iostream>
using namespace std;
void perfect(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    perfect(a,b);
    return 0;
}
void perfect(int a,int b)
{int sum;
    for(int i=a;i<=b;i++)
    {sum=0;
    for(int j=1;j<i;j++)
    {
        if(i%j==0)
        sum=sum+j;
    }
    if(sum==i)
    cout<<"number is perfect"<<i<<endl;
    
    }
}