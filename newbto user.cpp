#include<iostream>\\user to basic
using namespace std;
class dist
{
int f,i;
public:
dist(int c,int e)
{
f=c;
i=e;

}
void cal()
{
    float a=f+i/12.0;
cout<<"value is:"<<a;

}};

int main()
{
 dist d(11,15);
d.cal();

}
