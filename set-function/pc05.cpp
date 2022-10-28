#include <iostream>
using namespace std;

int a = 200;
int b = 200;
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
