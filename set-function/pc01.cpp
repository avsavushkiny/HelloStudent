#include <iostream>
using namespace std;

int a = 10;
int b = 5;
int q{};

int f_s(void)
{
    q = a - b;
    cout << q << endl;
    return 0;
}

int main(void)
{
 f_s();
 return 0;
}