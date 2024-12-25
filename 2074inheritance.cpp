// 2 and 3 of 2074

#include<iostream>
using namespace std;
class lecture
{
    int id;
    char lname[20];
public:
    void readdatal()
    {
        cout<<"enter id and name of lecture"<<endl;
        cin>>id>>lname;
    }
    void printdatal()
    {
        cout<<"id is:"<<id<<endl;
        cout<<"name is:"<<lname<<endl;
    }
};

class parttime:public lecture
{
    float payperhr;
public:
    void readdata()
    {
        readdatal();
        cout<<"enter pay per hour"<<endl;
        cin>>payperhr;
    }

    void printdata()
    {
        printdatal();
        cout<<"the pay is"<<payperhr<<endl;
    }
};

class fulltime:public lecture
{
    float paypermonth;
public:
    void readdata()
    {
        readdatal();
        cout<<"enter pay per month"<<endl;
        cin>>paypermonth;
    }

    void printdata()
    {
        printdatal();
        cout<<"the pay is"<<paypermonth<<endl;
    }
};


int main()
{
    parttime p;
    fulltime f;

    p.readdata();
    f.readdata();

    p.printdata();
    f.printdata();

}

/*


#include<iostream>
using namespace std;
class gram1                       //yo should be different
{
    float gm;                      //from yo
public:
    gram1()
    {
        gm=0;                     //yo leknu parcha
    }
    gram1(int g)
    {
        gm=g;
    }

    void display()
    {
        cout<<"value of gram "<<gm;
    }
};

class kilo
{
    float kg;
public:
    kilo(int k)
    {
        kg=k;
    }


    operator gram1()
    {
        int gm=kg*1000;

    return gram1(gm);

    }

};
int main()
{
      gram1 g1;
    kilo k1(20);
    g1=k1;
    g1.display();
    return 0;
}























#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        {
        return 0;
    }
    else if (n == 1)
        {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
 {
    int n = 2;

    for (int i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}




#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 2;
    // Change this to the desired term
    printf("The %dth term of the Fibonacci sequence is %d.\n", n, fibonacci(n));
    return 0;
}











#include<stdio.h>
int fun2(int x);
int fun1(int n)
{

    if(n==0)
    {
        return n;
    }
    else
        return fun2(n);
}
int fun2(int x)
{

    return fun1(x-1);
}

int main()
 {
    int result;
    result = fun1(5);
    printf("Result: %d\n", result);
    return 0;

}







#include<stdio.h>
int fun(int n)
{
    if(n>0)
    {
        printf("%d\t",n);
        return fun(n-1);

    }
    else
        {
        return 0;
    }


}

int main()
{

    fun(5);
    return 0;

}
*/

