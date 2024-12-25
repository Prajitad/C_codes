/*
#include<iostream>
using namespace std;
class Add
{
    int cm,m;
public:
    void setdata()
    {
        cout<<"enter value m and cm "<<endl;
        cin>>m>>cm;
    }

    void display()
    {
        cout<<"sum value is"<<m<<"m"<<cm<<"cm";
    }

    friend Add operator +(Add ,Add );

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
//

#include<iostream>
using namespace std;
class A
{
    protected:
        int adata;

public:
        A(int a)
        {
            adata=a;
        }
};

class B
{
protected:
    int bdata;
public:

    B(int b)
    {
        bdata=b;
    }
};

class C:public A, public B
{
  int cdata;
  public:
      C(int a,int b,int c):A(a),B(b)
      {
          cdata=c;
      }
  void showdata()
  {
      cout<<"adata is"<<adata;
       cout<<"adata is"<<bdata;
        cout<<"adata is"<<cdata;
  }

};
int main()
{
    C t(2,4,6);
    t.showdata();
}

*/

#include<iostream>
using namespace std;

class Person
{
protected:
int ID;

public:
void get()
{
cout<<"Enter ID: ";
cin>>ID;
}
void display(){
cout<<"ID: "<<ID;
 }
};

class Student
{
protected:
string Name;

public:
void get()
{
cout<<"Enter Name: ";
cin>>Name;
}
void display()
{
cout<<"Name: "<<Name;
 }
};

class Employee: public Person
{
protected:
float Salary;
public:

void get(){
cout<<"Enter Salary: ";
cin>>Salary;
}
void display(){
cout<<"Salary: "<<Salary;}
};

class Assistant: public Student, public Employee
{
private:
int AID;

public:
void getaid()
{

    Person::get();
    Employee::get();
    Student::get();

cout<<"Enter AID: ";
cin>>AID;
}
void displayaid()
{
    Person::display();
    Employee::display();
    Student::display();

cout<<"AID: "<<AID ;
}
};


int main()
{

Assistant a;
a.getaid();

a.displayaid();


return 0;
}

