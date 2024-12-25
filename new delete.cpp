/*
#include<iostream>
using namespace std;
int main()
{

 int *pointer;

pointer=new int;

 *pointer=24;


cout<<"pointer";

delete pointer;

return 0;


}
*/

#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"constructor called"<<endl;

    }

    ~base()
    {
        cout<<"destructor:";
    }
};

int main()
{
    base *b=new base();
    delete b;
    return 0;
}
