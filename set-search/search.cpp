#include <iostream>
#include "add.h"
using namespace std;

int searchEngine();
int searchEngineChar();

int main()
{
    for (;;)
    {
        cout << "Enter 'y' to search, 'n' to exit" << endl;
        char ynText{};

        cin >> ynText;

        if (ynText == 'y')
        {
            searchEngine();
        }
        if (ynText == 'n')
        {
            cout << "Exit" << endl;
            break;
        }
    }

    return 0;
}

int searchEngine()
{
    cout << "Enter a request" << endl;

    string textUserSearch{};
    cin >> textUserSearch;

    for (int item = 0; item <= 10; item++)
    {
        if (textUserSearch == obj[item].title)
        {
            for (int aTop = 0; aTop <= 15; aTop++)
            {
                cout << "-";
            }
            cout << endl;

            cout << obj[item].title << endl;
            cout << obj[item].body << endl;
            cout << obj[item].link << endl;
            cout << "Rated " << obj[item].rated << " of the 127" << endl;

            for (int aTop = 0; aTop <= 15; aTop++)
            {
                cout << "-";
            }
            cout << endl;
        }
        else cout << "Not found " << objChar[item].numObject << endl;
    }

    return 0;
}

int searchEngineChar()
{
    cout << "Enter a request" << endl;

    string textUserSearch;
    cin >> textUserSearch;

    for (int item = 0; item <= 10; item++)
    {
        if (textUserSearch == objChar[item].title)
        {
            for (int aTop = 0; aTop <= 15; aTop++)
            {
                cout << "-";
            }
            cout << endl;

            cout << objChar[item].title << endl;
            cout << objChar[item].body << endl;
            cout << objChar[item].link << endl;
            cout << "Rated " << objChar[item].rated << " of the 127" << endl;

            for (int aTop = 0; aTop <= 15; aTop++)
            {
                cout << "-";
            }
            cout << endl;
        }
        else cout << "Not found " << objChar[item].numObject << endl;
    }

    return 0;
}