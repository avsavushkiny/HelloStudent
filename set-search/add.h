#pragma once
#include <iostream>
using namespace std;

struct Object
{
    string title;
    string body;
    string link;
    int numObject;
    int rated;
} obj[]
{
    {"Google","Internet search engine","http://www.google.com", 1, 127},
    {"Yandex","Internet search engine","http://www.ya.ru", 2, 127},
    {"Bing","Internet search engine","http://www.bing.com", 3, 127},
    {"Yandex dzen","Internet search engine","http://www.dzen.ru", 4, 127},
    {"Pogoda Yandex","Internet search engine","http://www.ya.ru", 5, 127},
    {"Google","Mail","http://www.google.com", 6, 127}
};