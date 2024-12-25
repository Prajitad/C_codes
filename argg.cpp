#include<iostream>\\no ar no re
using namespace std;
int add(int *a,int *b)


{
int sum;
cout<<"sum is"<<*a+*b;
}





int main()
{
int x,y;
x=1;
y=2;
add(&x,&y);
return 0;
}
