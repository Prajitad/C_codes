#include<iostream>
using namespace std;
class Add
{
public:
    int l;//imp
setdata()
    {
        cout<<"data";
cin>>l;
    }


 void display()
 {
 cout<<"the value of l:"<<l;
 }
 };

 Add operator +(AddA1,AddA2)
{
    Add A;
A.l=A1.l+A2.l;

return A;
}
 int main()
 {
 Add A1,A2,A3;
 A1.setdata();
 A2.setdata();
 A3=A1+A2;

 A3.display();

 }
