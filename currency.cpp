#include <iostream>
using namespace std;
class curr
{
    int paisa;
    int rs;
    public:
void getdata()
{
    cout << "Enter f n i :" << endl;
    cin>>rs>>paisa;
}
void display()
{
cout<<"the curren are"<<rs<<paisa;
}

void add(curr c1,curr c2)
{
    int in=c1.paisa+c2.paisa;
int feet=c1.rs+c2.rs;

  {

  if (in>=100)
    {
    int extra=in/100;
    feet +=extra;
    in -=extra*100;
}
  }

cout<<"sum of 2 times are :"<<feet<<"rs"<<in<<"p";
}
 };

int main()
{
    curr c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c1.display();
     c3.add(c1,c2);
}
