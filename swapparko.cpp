#include<iostream>
using namespace std;

int swapp(int &a,int &b);

int main()
{
    int a=2,b=5;

    cout<<"before:"<<a<<"and"<<b<<endl;
    swap(a,b);
    cout<<"the new value is"<<endl<<a<<endl<<b;
    return 0;
}
int swapp(int a,int b)

{
     int temp=a;
       a=b;
       b=temp;
}

//orrrrrrrrrrrrrrrrrrrr


yo chai pointer lai garda sajilo hunacha


#include<iostream>
using namespace std;
int swapp(int *a,int *b)

{

    int temp=*a;
       *a=*b;
       *b=temp;
}
int main()
{

    int a=2,b=5;

    cout<<"before:"<<a<<endl<<b<<endl;
    swapp(&a,&b);
    cout<<"the new value is"<<endl<<a<<endl<<b;
    return 0;
}


*/
