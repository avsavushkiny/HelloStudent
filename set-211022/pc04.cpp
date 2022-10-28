#include <iostream>
using namespace std;

int a = 2;
int b = 3;
int c{};

void summa (void)
{
    c = a + b;
    cout << c << endl;
}

int main (void)
{
    summa();
    return 0;
}