#include <iostream>
using namespace std;

int matreshka(int n)
{
    if (n == 1)
    {
        cout << "Last matreshka " << n << endl;
    }
    else
    {
        cout << "Top side of matreshka " << n << endl;
        matreshka(n-1);
        cout << "Button side of matreshka " << n << endl;
    }
    return 0;
}Ё

int main () 
{
    matreshka(5);
    return 0;
}