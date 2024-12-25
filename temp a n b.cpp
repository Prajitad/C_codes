
#include<iostream>
using namespace std;

int main()
 {
int a, b, result;
cout << "Enter value of a: ";
cin >> a;
cout << "Enter value of b: ";
cin >> b;

try {
if (b == 0)
{
throw b;
}
else if (b < 0)
{
  throw 'j';
}

else result = a / b;
cout << "Result: " << result << endl;
}

catch (int i) {
cout<< "exception"<<i<< endl;
}


catch (char j) {
cout<< "exception 2"<<j<<endl;
}
return 0;
}


/*


#include<iostream>
using namespace std;

int main() {
int a, b, result;
cout << "Enter two numbers: ";
cin >> a >> b;

try {
if (b == 0) {
throw "Divide by zero error";
}
else if (b < 0) {
throw "Negative divisor error";
}
else {
result = a / b;
cout << "Result: " << result << endl;
}
}
catch (const char* msg) {
cerr << "Error: " << msg << endl;
}

return 0;
}
*/
