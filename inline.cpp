#include<iostream>
using namespace std;
inline int add(int a,int b)
{

return (a+b);
}

inline float subtract(float x,float y)
{
return (x-y);
}


int main()
{
int a=2, b=4;

float x=9,y=4.6;

cout<<"sum is"<<add(a,b)<<endl;

cout<<"subb is"<<subtract(x,y);

return 0;
}
