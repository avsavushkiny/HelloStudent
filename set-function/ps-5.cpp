#include <iostream>
using namespace std;
 
int getNumbers()
{
    return 6;
    return 8;
}
 
int main()
{
    cout << getNumbers() << endl;
    cout << getNumbers() << endl;
 
    return 0;
}