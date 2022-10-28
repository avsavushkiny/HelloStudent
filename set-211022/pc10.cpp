#include <iostream>
using namespace std;
void summa();


int a= 3 ;
int b= 10 ;
int c{} ;

int main (void)
{
    summa();
    return 0;
}

void summa()
{
   c = a + b;
   cout << c << endl;
}