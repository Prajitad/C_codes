#include<iostream>
using namespace std;
class polygon
{
   protected:
   int l,b;

public:
        polygon()
    {

    l=6;
    b=2;

    }
    virtual int calc()=0;
};

class rect:public polygon

{
int calc()
{
cout<<"area of rec"<<l*b;
}
};

class square:public polygon
{

int calc()
{
cout<<"area is"<<l*l;

}
};

int main()
{
polygon *p;
rect r;
square s;


p=&r;
p->calc();

p=&s;
p->calc();

return 0;



}
