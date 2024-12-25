#include<iostream>
using namespace std;
class rec
{
int l,b;
public:

    rec()
    {
        l=1;
        b=2;
}

void operator ++()
{
++l;
++b;
}
void display()
{
cout<<"value are"<<l<<b;}
};
int main()
{
rec r;
++r;
r.display();

}
