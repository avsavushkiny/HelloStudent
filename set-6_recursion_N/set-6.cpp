#include <iostream>
using namespace std;

double Foo(int N)
{
    if (N == 1)
    {
        return 1;
    }
    else
    {
        return N*Foo(N-1);
    }
}

int main(void)
{
    int NN{};
    cout << "Please N" << endl;
    cin >> NN;

    Foo(NN);
    return 0;
}