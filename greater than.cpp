#include<iostream>
using namespace std;
class greater_than
{
int data;
public:

void setdata()
{
cout<<"data";
cin>>data;
         }

int operator >(greater_than d)
{

     if(data>d.data)
{
  return 1;
             }
else
{
 return 0;
         }
}
};

int main()
{
greater_than d1,d2;
d1.setdata();
d2.setdata();

if(d1>d2)
{
cout<<"d1 greater";

}
else
{
    cout<<"d1 not g";

    }

    return 0;
}
