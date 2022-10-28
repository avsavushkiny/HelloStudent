#include <iostream>
using namespace std;

int a = 300;
int b = 300;
int c = {};

void summa(void)
{
   c = a + b;
}

int main(void)
{
   summa();
   cout << c << endl;
   return 0;
}