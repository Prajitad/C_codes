#include<iostream>
using namespace std;
template <class T>
T swaps(T &a,T &b)
{
                             //  T swaps;

    T temp= a;
    a=b;
    b=temp;

                               //  return swaps; it is for return by reference tara pass by is asked
}
 int main()
 {
     int x=5,y=8;
     swaps(x,y);
     cout<<"swap of x and y is"<<x<<"and"<<y<<endl;


     float w=2.4, u=4.67;
     swaps(w,u);
     cout<<"swap of x and y is"<<w<<"and"<<u<<endl;


      char c1 ='a',c2 = 'b';
     swaps(c1,c2);
     cout<<"c1 is "<<c1<<endl<<"c2 is"<<c2<<endl;

     double d1=55.8 ,d2=89.5;                                      // use d matra for double
     swaps(d1,d2);
     cout<<"swap of x and y is"<<d1<<"and"<<d2<<endl;

return 0;
 }
