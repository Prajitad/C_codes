
  //dynamic anii pure virtual or abstract
/
#include<iostream>
using namespace std;
class A
{
public:

virtual void display()
{
    cout<<"this is A"<<endl;

}
};


class C:public A
{
public:

void display()
{
    cout<<"this is c"<<endl;

}
};


class B:public A
{
public:

void display()
{
    cout<<"this is b"<<endl;

}
};

int main()

{

    A *p;
    A a;
    C c;
    B b;

     p=&a;
    p->display();

    p=&b;
    p->display();

    p=&c;
    p->display();

    return 0;

}












#include<iostream>
using namespace std;
class polygon
{
protected:

    int l,b;
    public:

        polygon()
        {
            l=3;
            b=4;
        }
        virtual int calc()=0; //area

};

class rect :public polygon
{
public:
    int calc()                          //yo ni area
    {
        cout<<"area is "<<l*b;

    }
};

class square :public polygon

{
public:
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



//*/





