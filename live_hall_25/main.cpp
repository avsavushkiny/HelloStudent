#include <iostream>
using namespace std;
int summa();

int main()
{
    cout << summa() << endl;
    return 0;
}

int summa()
{
    int a = 10;
    int b = 12;
    int c;

    c = a + b;
    return c;
}