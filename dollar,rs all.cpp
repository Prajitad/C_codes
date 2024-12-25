/*
#include<iostream>
using namespace std;

class rs
{
int r,pa;
public:

rs(int r,int pa)
{

r=r;
pa=pa;
}

void display()
{
cout<<"rupees  and p is"<<r<<"rs"<<pa;
}

};


class dollar
{
int d,c ;
public:

dollar(int x,int y)
{
d=x;
c=y;
}

operator rs()
{
int r,pa;

r= d * 130;
pa= c * 130;

r =r+ pa/100;
pa=pa %100;

return rs(r,pa);

}
};

int main()
{
dollar d1(4,24);

rs r1=d1;
r1.display();
return 0;
}


*/







#include<iostream>
using namespace std;
class rupees
{
    int rs,pa;
public:
    rupees(int x,int y)

    {
        rs=x;
        pa=y;

    }

   void display()
   {
       cout<<"value is:"<<rs<<"rs"<<pa<<"pa";
   }

};



 class dollar
 {
     int d,c;
 public:
    dollar(int dol,int ce)
    {
        d=dol;
        c=ce;
    }



    operator rupees()
    {

        int rs,pa;

        rs= d* 130;
        pa=c *130;
        rs= rs + pa/100;
        pa= pa%100;

    return rupees(rs,pa);
    }

 };

 int main()
 {
     dollar d1(4,24);

     rupees r1=d1;

     r1.display();
     return 0;
 }


