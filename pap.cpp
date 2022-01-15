# include<iostream>
using namespace std;
void prime(int a);
void armstrong(int a);
void perfect(int a);
int main()
{int a;
cout<<"Enter the number"<<endl;
cin>>a;
prime(a);
armstrong(a);
perfect(a);
    return 0;
}
void prime(int a)
{int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count!=0)
    cout<<"not a prime number"<<endl;
    else
    cout<<"prime number";
}
void armstrong(int a)
{int n=a;
    int sum=0;
    while(n!=0)
    {
        int rem=n%10;
         sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==a)
    cout<<"number is armstrong"<<endl;
    else
    cout<<"number is not armstrong"<<endl;
}
void perfect(int a)
{
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    if(a==sum)
    cout<<"number is perfect"<<endl;
    else
    cout<<"number is not perfect"<<endl;
}