/*
#include<iostream>// yo user to basic
using namespace std;
class money
{
int rs,pa;
public:


money(int x,int y)
{
rs=x;
pa=y;

}
void display()
{
float total=rs+pa/12.0;
cout<<"the value :"<<total;
}
};

int main()
{
money f(8,6);
f.display();
}
*/


#include<iostream>// yo user to basic
using namespace std;
class money
{

int rs,pa;
public:

money(int x,int y)
{
rs=x;
pa=y;

}

operator float()
{
    float a=rs + pa/12.0;
    return a;
}

};

int main()
{
money f(8,6);
float a=(float)f;

cout<<"a="<<a;
}





#include<iostream>// yo user to basic
using namespace std;
class money
{

int rs,pa;
public:

money(int x,int y)
{
rs=x;
pa=y;

}
 opertaor float()
 {
     float a=rs+ pa/100.0;
     return a;
 }

};
int main()
{
    money m( 100,22);
    float a=(float)m;
    cout<<"value of a"<<a;

}




