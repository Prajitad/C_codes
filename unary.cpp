 /* #include<iostream>
using namespace std;
class rec
{
int l,b;
public:

    rec()
    {
        l=1;
        b=2;
        }
void operator --(int)
{
l--;
b--;
}
 void display()
 {
 cout<<"the value are:"<<l<<b;}
 };
 int main()
 {
 rec r;
 r--;
 r.display();}



*/
















 #include<iostream>
 using namespace std;
 class rec
 {
 int l,b;
 public:

 rec()
 {
   l=3;
   b=4;

 }

 void operator ++()
 {

     ++l;
     ++b;
 }

 void display()
 {

 cout<<"value is :"<<l<<endl<<b;
 }
 };

 int main()
 {
     rec r;
     ++r;
     r.display();

 }
