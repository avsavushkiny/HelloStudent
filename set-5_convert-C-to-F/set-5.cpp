#include <iostream>
using namespace std;

int main(void)
{
    float valueC{};

    cout << "Please. Enter value." << endl;
    cin  >> valueC;

    float result = (1.8 * valueC) + 32;

    cout << result << endl;

    return 0;
}