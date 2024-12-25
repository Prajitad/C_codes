#include<iostream>
using namespace std;
int add(int a,int b);

int main()
{
int a,b;
cout<<"enter 2 nums";
cin>>a>>b;
add(a,b);

}
int add(int a,int b)
{
int sum;
sum=a+b;
cout<<"sum is"<<sum;
}

//with argument no return
