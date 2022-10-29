#include <iostream>
using namespace std;

int z = 5;
int x = 3;
int c = 25;
int a = 1000;
int b = 7;

int fun(void){
    cout << a - b << endl;
    return 0;
}
int fun_1(void)
{
    cout << z * x * c << endl;
    return 0;
}

int main(void)
{
    fun();
    fun_1(); 
}