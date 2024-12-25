#include<iostream>
using namespace std;
int add(int a, int b);

int main()
{
    int a,b,sum;
cout<<"enter nums";
cin>>a>>b;

sum=add(a,b);
cout<<"the sum is"<<sum;


}

int add(int a, int b)
{
return (a+b);
}
