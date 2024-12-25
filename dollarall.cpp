#include<iostream>
using namespace std;
class dollar
{
int d,c ;
public:
dollar()
{

    d=0;
    c=0;
}



dollar(int x,int y)
{
d=x;
c=y;
}
void display()
{
cout<<"d is"<<d;
cout<<"c is"<<c;
}
};

class rs
{
int r,pa;
public:
rs(int r,int pa)
{
r=r;
pa=pa;
}
operator dollar()
{
int d,c;
d=r*100;
c=pa* 10000;
d=d+c/100;
c=c%100;
return dollar(d,c);


}};
int main()
{
dollar d1;
    rs d2(200,3);
d1=d2;

d1.display();
}
