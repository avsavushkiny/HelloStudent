#include <iostream>
using namespace std;

void matreshka2()
{
    cout << "      matreshka 2 OPEN" << endl;
    cout << "      matreshka 2 CLOSE" << endl;
}

void matreshka1()
{
    cout << "   matreshka 1 OPEN" << endl;
    matreshka2();
    cout << "   matreshka 1 CLOSE" << endl;
}

int main()
{
    cout << "matreshka 0 OPEN" << endl;
    matreshka1();
    cout << "matreshka 0 CLOSE" << endl;
    return 0;
}