#include <iostream>
using namespace std;
 
int add(int a, int b)
{
   return a + b;
}
 
int multiply(int c, int d)
{
   return c * d;
}
 
int main()
{
   cout << add(7, 8) << endl;
   cout << multiply(4, 5) << endl;
 
   cout << add(2 + 3, 4 * 5) << endl;
 
   int x = 4;
   cout << add(x, x) << endl;
 
   cout << add(1, multiply(2, 3)) << endl;
   cout << add(1, add(2, 3)) << endl;
 
   return 0;
}