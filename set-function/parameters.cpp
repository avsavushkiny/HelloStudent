#include <iostream>
using namespace std;

void doPrint()
{
    cout << "In doPrint()" << endl;
}

// Эта функция имеет один параметр типа int: a
void printValue(int a)
{
    cout << a << endl;
}

// Эта функция имеет два параметра типа int: a и b
int add(int a, int b)
{
    return a + b;
}

int main()
{
    printValue(7); // 7 – это аргумент функции printValue()
    add(4, 5);     // 4 и 5 – это аргументы функции add()
    return 0;
}