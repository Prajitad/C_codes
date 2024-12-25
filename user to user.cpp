#include<iostream>
using namespace std;
class rup
{
    int rs,pa;
public:
    rup()
    {
        rs=0;
        pa=0;
 }

    rup(int r,int p)
    {
        rs=r;
        pa=p;     }

void display()
 {
cout<<"rs and pa is:"<<rs<<"rs"<<pa<<"pa";
 }

 };

class dollars
{
int dollar,cent;
public:

dollars(int x,int y)
{
    dollar=x;
    cent=y;
}
 operator rup()
 {
     int pa,rs;

     rs=dollar*130;
     pa=cent*130;
     rs=rs+pa/100;
     pa=pa%100;
     return rup(rs,pa);
 }
};

 int main()
 {

     dollars d1(4,24);
 rup r1=d1;
     r1.display();
     return 0;
 }

