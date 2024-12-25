///*
 #include<iostream>
using namespace std;
class Add
{
    int l;
public:
                  //public

 void setdata()
    {
        cout<<"data";
cin>>l;
    }


 void display()
 {
 cout<<"the value of l:"<<l;
 }
friend add operator *(Add,Add);

 };

 Add operator +(Add A1,Add A2)
{
    Add A;                            //return by reference jasto
A.l=A1.l+A2.l;

return A;
}

 int main()

 {
 Add A1,A2,A3;
 A1.setdata();
 A2.setdata();
 A3=A1+A2;

 A3.display();

 }


yo           chahi              multiply

*/
/*

#include<iostream>
using namespace std;
class mul
{
    int l;
public:

    void setdata()
    {
        cout<<"enter value";
        cin>>l;
        }

    void display()
    {

        cout<<"value is:"<<l;
    }
friend mul operator *(mul,mul);
};

mul operator *(mul m1,mul m2)
{
    mul m;
    m.l=m1.l * m2.l;
    return m;

}
int main()
{

    mul m1,m2,ms;

    m1.setdata();
    m2.setdata();

    ms=m1* m2;
    ms.display();
}




  */
//  /*

#include<iostream>
using namespace std;
class Add
{
    int cm,m;
public:
    void setdata()
    {

        cout<<"enter value m n cm ";
        cin>>m>>cm;
    }

    void display()
    {

        cout<<"sum is"<<m<<"m"<<cm<<"cm";
    }
    friend Add operator +(Add , Add );       // A1 lekhnu pardaina
};

Add operator +(Add A1, Add A2)
{
    Add A;
    A.cm=A1.cm+A2.cm;
    A.m=A1.m +A2.m;

    if(A.cm>=100){

        int ex=A.cm/100;
        A.m+= ex;
        A.cm -=ex*100;
    }
    return A;
}

int main()
{
    Add A1,A2,A3;

    A1.setdata();
    A2.setdata();

    A3=A1+A2;

    A3.display();
}

// */
