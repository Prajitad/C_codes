/* #include<iostream>
using namespace std;
class time

{
int a,b;
public:
void data();
void display();
};


    void time::data()
    {
    a=1;
    b=2;
    }
    void time::display()
    {

        cout<<" a and b are"<<a<<b;
    }

    int main()
    {


    time t;

     t.display();
    }

 */



   #include<iostream>
   using namespace std;
   class rect
   {
      int l,b;
  public:


   void setdata();
    void area();
    };


   void rect :: setdata()
   {
       l=2;
       b=4;    }

   void rect :: area()
   {setdata();
       cout<<"area is"<<l*b;
   }

   int main()
   {

       rect r;

       r.area();
   }
















