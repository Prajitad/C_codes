 #include<iostream>
using namespace std;
int swap(int *a,int *b);

int main()
{
int a=1,b=2;
swap(&a,&b);


cout<<"the a and b are"<<a<<"and"<<b;
return 0;
}


int swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;

}


/*
#include<iostream>
using namespace std;
class test
{
    int x,y;
    public:
    test ()
    {

        x=0;
        y=5;
        cout<<"alloacation"<<endl;

    }
    ~test()
    {

        cout<<"deallocate";
    }
};
int main()
{
    {
    test u;
}
return 0;}*/
