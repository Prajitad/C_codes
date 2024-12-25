#include<iostream>
using namespace std;
class product
{

    int n,c;
public:
    void getdata(int a,int b);
    void putdata()
    {

        cout<<"cost and no is"<<c<<endl<<n;
    }
};

inline void product::getdata(int a,int b)
{
    c=a;
    n=b;
}
void main()
{

    pro p;

    p.getdata(2,5);
    p.putdata();
}
