/*C++ program to create class to read and add two times.*/
#include <iostream>
using namespace std;
class Time
{
    int h;
    int m;
    public:
void getdata()
{
    cout << "Enter time:" << endl;
    cin>>h>>m;
}
void add(Time &t)
{
    int min=m+t.m;
int hour=h+t.h;

    if (min>=60)
    {
       hour=hour+min/60;
min=min%60;
}
cout<<"sum of 2 times are :"<<hour<<"hr"<<min<<"m";
}
 };

int main()
{
    Time T1,T2;
    T1.getdata();
    T2.getdata();
     T1.add(T2);
}
