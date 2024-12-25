///*
#include<iostream>       //basic to user
using namespace std;
class time
{

int r;
int p;

public:

time(float f)   //time (int x) garya jastai
{
     r=int(f);
     p=100*(f-r);
}
void display()
{
cout<<"value is"<<r<<"rs"<<p;}
};

int main()
{
time f(100.25);
f.display();
}
*/




#include<iostream>
using namespace std;
class money
{
  int rs,paisa;
  public:

     money(float x)
     {
          rs=int (x);
          paisa=12*(x-rs);
     }

 void display()
 {

     cout<<"value is "<<rs<<"rs"<<paisa<<"pa";
 }

};

int main()
{
    money m(2.5);
    m.display();

}









