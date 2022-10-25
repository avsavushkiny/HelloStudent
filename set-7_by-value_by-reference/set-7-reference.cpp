#include <iostream>
using namespace std;
 
void square(int&, int&);
 
int main()
{
    int a = 4;
    int b = 5;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    square(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
 
    return 0;
}

void square(int &a, int &b)
{
    a = a * a;
    b = b * b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
