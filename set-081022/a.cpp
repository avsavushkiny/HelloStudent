#include "convert.h"

int main()
{
    char br;
    for (;;)
    {
        cout << "Enter y/n " << endl;
        cin >> br;
        if (br == 'n')
        {
            break;
        }
        if (br == 'y')
        {
          con();
        }
        else
        {
            cout << "Choose y/n" << endl;
        }
    }
    return 0;
}