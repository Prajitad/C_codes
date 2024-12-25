#include <iostream>

using namespace std;

class Example {
  private:
    int value;

  public:
    Example() {
      value = 0;
    }

    int getValue() {
      return value;
    }

    void setValue(int v) {
      value = v;
    }
};

int main() {
  Example obj1; // Default constructor
  Example obj2 = obj1; // Default copy constructor

  obj1.setValue(42);

  cout << "obj1 value: " << obj1.getValue() << endl;
  cout << "obj2 value: " << obj2.getValue() << endl;

  return 0;
}
