#include<iostream>
using namespace std;
class rec
{
int l,b;
public:
    rec()
    {l=1;
        b=2;}
rec(int x,int y)
{
l=x;
b=y;
}
rec(rec &r)
{
l=r.l;
b=r.b;
}
void area()
{
cout<<"area"<<l*b;}
                           };
int main()
{    rec r;
    r.area();

rec r1(2,3);
r1.area();
            rec r2(r1);
            r2.area();}
