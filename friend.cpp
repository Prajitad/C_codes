#include<iostream>
using namespace std;
class area
{
private:
    int l,b;
  public:

    area()
    {
        l=4;
        b=5;
    }

friend int calc( area );          //syntax: friend return type  function name(ar);

};

int calc( area a)
{

return (a.l*a.b);

}

int main()
{
    area g;
    cout<<"value"<<calc(g);
}

// /*



#include<iostream>
using namespace std;
class B;
class A
{
    int value;
public:
    A()
    {
        value=7;
    }

   friend int multiply(A,B) ;
};
class B
{
    int value;
public:
    B()
    {
        value=2;
    }
       friend int multiply(A,B) ;
};

   int multiply(A a,B b)
   {
     return ( a.value*b.value)  ;
   }


  int main()
  {
      A s;
      B t;
      cout<<"product is"<<multiply(s,t);
      return 0;
  }





*/




