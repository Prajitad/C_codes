#include<iostream>
using namespace std;
class time
{
public:
time()

{
    cout<<" const base allocated"<<endl;
}

virtual ~time()

{
cout<<" base ko deallocated"<<endl;
}
};

class B :public time
{
    public:
    B()
    {
    cout<<" derived cons ko allocated"<<endl;
}

~B()

{
cout<<" deri ko deallocated"<<endl;
}
};


int main()

{
    time *p=new B;
    delete p;
}
