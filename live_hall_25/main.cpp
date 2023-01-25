#include <iostream>
using namespace std;
void pattern();

int main()
{
    pattern();
}

void pattern()
{
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= 5 - a; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}