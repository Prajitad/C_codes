#include<iostream>
using namespace std;
class Add
{
int i,r;
public:

void getdata()
{
cout<<"enter r and i";
cin>>r>>i;
}
void display()
{
cout<<"sum"<<r<<"+"<<i;

}
};
Add operator +(Add A1,Add A2)
{
Add A;
A.r=A1.r+A2.r;
A.i=A1.i+A2.i;
return A;
}



int main()
{
Add A1,A2,A3;
A1.getdata();
A2.getdata();
A3=A1+A2;
A3.display();
}
