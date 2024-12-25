#include<iostream>
using namespace std;
class time
{
int h,m,T1,T2;

public:
void setdata()
{
cout<<"enter s and m";
}

void calc()
{

    this->m=T1.m+T2.m
    this->h= T1.h+T2.h + (this->m/60);
    this->h %=60;
    this->m %=60;
}





};
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();
    //add two times
    T3.addTime(T1,T2);
    T3.putTime();

    return 0;
}
