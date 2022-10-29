#include <iostream>
using namespace std;

int getValueFromUser()
{
   cout << "Enter an integer: " << endl;
   int x;
   cin >> x;
   return x;
}

int main()
{
   int a = getValueFromUser();
   int b = getValueFromUser();

   cout << a << " + " << b << " = " << a + b << endl;

   return 0;
}