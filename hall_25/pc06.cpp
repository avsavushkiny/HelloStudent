#include <iostream>
using namespace std;

int getValueFromUser()
{
    cout << "Enter an integer;" << endl;
    int х;
    cin >> х;
    return х;
}

int main()
{

    int a = getValueFromUser();
    int b = getValueFromUser();

    cout << a << "+" << b << "=" << a + b << endl;

    return 0; 
}