#include <iostream>
using namespace std;
class Person
{
int id;
char name[15];
public:

void getdata()
  {
         cout<<"enter id and name";
  cin>>id>>name;
  }

    void show() {
        cout << "ID: " << id<<endl;
        cout << "Name: " << name<<endl;
    }
};

class Student : public Person
{

int grade;
char address[20];
public:

  void readdata()
  {
  getdata();
  cout<<"enter grade and address";
  cin>>grade>>address;
}
    void display()
    {
          show();
        cout << "Grade: " << grade<<endl;
        cout << "Address: " << address <<endl;
    }
  };


  int main()
  {
  Student s;
  s.readdata();

  s.display();
return 0;

  }
