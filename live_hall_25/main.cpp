#include <iostream>
using namespace std;

int getValueUser()
{
    int x; 
    cin >> x;
    return x;
}

int main()
{
    int a = getValueUser();
    int b = getValueUser();

    cout << a + b << endl;

    return 0;
}