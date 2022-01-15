#include <iostream>
using namespace std;
void area_circum(int r);
int main()
{int r;
cout<<"Enter the radius:"<<endl;
cin>>r;
area_circum(r);
    return 0;
}
void area_circum(int r)
{
    float area,cir;
    area=3.14*r*r;
    cir=2*3.14*r;
    cout<<"area :"<<area<<endl<<"circumference :"<<cir<<endl;
}