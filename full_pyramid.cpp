#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = 1; i <= 5; i++)
    {

        for (int space = 1; space <= 5 - i; space++)
        {
            cout << "  ";
        }

        for (int j = 5 - i + 1; j <= 5; j++)
        {
            cout << j << " ";
        }

        for (int j = 5 - 1; j >= 5 - i + 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}
