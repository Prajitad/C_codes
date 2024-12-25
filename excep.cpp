#include<iostream>
using namespace std;

int main()
{
int value;
cout << "Enter a value: ";
cin >> value;

try
 {
if (value == 0)
throw 1;

 else if (value == 1)
throw 'a';

 else if (value == -1)
throw 35.77;      // "" is necess if "negative "

 else
cout<< "Invalid value";     //""is nec



}
 catch (int e)
{
cout << "Caught an integer exception: " << e << endl;

}
catch (char e)
{
cout << "Caught a character exception: " << e << endl;
}
 catch (double f){
cout << "Caught a double exception: " << f << endl;}
return 0;
}
