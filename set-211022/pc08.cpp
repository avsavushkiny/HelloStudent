#include <iostream>
using namespace std;

int a = 9;
int b = 1;
int c{};

int plus_9(void)
{
  c = a + b;
  cout << c << endl;
  return 0;
}

int main(void)
{
  plus_9();
  return 0;
}