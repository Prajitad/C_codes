#include<iostream>
using namespace std;
class person
{
  int id;
  string name;
 public:

     person(int id, string name)  // yo id int ko nai lekhne
    {
    this->id=id;               // this use garne ani chutincha
    this->name=name;
    }
    void display()
    {
        cout<<"the value is"<<this->id<<endl<<this->name;

    }
};

int main()
{
    person p(12,"ram");
    p.display();
    return 0;

}
