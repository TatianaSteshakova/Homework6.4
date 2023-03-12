#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    char c[100];

    cout << "Введите слово: " << endl;
    cin >> c;

    for (int i = 1; i < strlen(c); i++)
    {
        if (c[i] != c[0])
        {
            printf("%c", c[i]);
        }
    }

    cout << endl;

    // Можно сделать и без буферной строки
    for (int i = strlen(c)-1; i >= 0; i--)
    {
        printf("%c", c[i]);
    }


}