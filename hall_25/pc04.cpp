#include <iostream>
using namespace std;

int getValueFromUser()
{
    cout << "Enter an integer: " << endl;
    int x;
    cin >> x;
    return ;
}

int main()
{
    int a = getValueFromUser();
    int b = getValueFromUser();

    cout << a << " + " << " = " << a + b << endl;
    
    return 0;
}