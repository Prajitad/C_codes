/*
#include<iostream>     //no arg yes ret
using namespace std;
float SI(float p, float r, float t) ;

int main()

 {
float p= 222, r = 5.6, t = 2;

float v=SI(p ,t ,r);
cout << " Simple Interest: " << v<< endl;

return 0;
}


float SI(float p, float r, float t)

{
float s;
s = (p * r * t) / 100;
return (s);
}

orrrrrrrrrrrrr

*/

#include<iostream>
using namespace std;
int *max(int *a, int *b)
{
    if(*a>*b)
        return a;

    else
        return b;
}

int main()
{
    int a=4,b=6;
    int *m =max(&a,&b);
    cout<<"value"<<*m;

    return 0;
}



orrrrrrrrrrrr



largest between 3 no.


#include<iostream>
using namespace std;
 int max(int a, int b ,int c)
 {

     if(a>b && a>c)
        return a;

    else if (b>a && b>c)
        return b;

    else return c;

 }

 int main()
 {
     int a=4,b=5,c=8;

     cout<<"max value"<<max(a,b,c);
     return 0;

 }




*/










