#include<iostream>
using namespace std;
class currency1
{
int rs,pa;
public:

currency1(float m)
{
rs=int(m);
pa=100*(m-rs);
}
void display()
{
cout<<"value are:"<<rs<<"rs"<<pa;}


};
int main()
{
float f=100.25;
currency1 d=f;
d.display();


}
