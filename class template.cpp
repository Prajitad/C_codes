#include<iostream>
using namespace std;
template<class T>

class A
{
    T data1,data2;
public:
    A(T a,T b)
    {
        data1=a;
        data2=b;
    }

    T max()
    {
        if(data1>data2)
        return data1;

        else
            return data2;
    }
};
int main()
{
    A<int>o1(6,8);
    cout<<"max int:"<<o1.max();

    A<float>o2(4.6,7.7);
    cout<<"max float:"<<o2.max();

    A<char>o3('a','b');
    cout<<"max char:"<<o3.max();

    return 0;
}




aniiiiiiiiiiiiii




#include<iostream>
using namespace std;
template<class T ,class U>

     T Fmax(T a, U b)                 //int add(int a, int b)
     {

  T max;
    {     T max;

        if(a>b)
         max=a;

        else
            max=b;

            return max;
    }

     };
     int main()
     {
         int a=2;
         char b='a';

         cout<<"maximum is:"<<Fmax(a,b);
         return 0;
     }

