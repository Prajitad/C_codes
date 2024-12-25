#include<iostream>
using namespace std;
class Add
{
    int r,i;
public:

void setdata()
    {
        cout<<"data i and r are";
cin>>i>>r;
    }

    void display()
    {
    cout<<"value is "<<r<<"+"<<i;

    }
   friend Add operator +(Add A1,Add A2);
};
Add operator +(Add A1,Add A2)
{
    Add A;
    A.i=A1.i+A2.i;
 A.r=A1.r+A2.r;
 return A;
}
int main()
{
   Add A1,A2,A3;
   A1.setdata() ;
   A2.setdata();
   A3=A1+A2;
   A3.display();

}
