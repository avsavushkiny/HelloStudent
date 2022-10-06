#include <iostream>
using namespace std;

string text;

//int myMassiv[3]{}; /*0 1 2*/

int main(void)
{

    cout << "you Name?" << endl;
    cin  >> text;
    cout << "hello " << text << endl;

    int myMassiv[3] = {11, 22, 33};

    cout << myMassiv[4] << endl;

    return 0;
}