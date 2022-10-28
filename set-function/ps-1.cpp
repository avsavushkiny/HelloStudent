#include <iostream>
using namespace std;
 
int return5()
{
    return 5;
}
 
int return8()
{
    return 8;
}
 
int main()
{
    cout << return5() + return8() << endl;
 
    return 0;
}