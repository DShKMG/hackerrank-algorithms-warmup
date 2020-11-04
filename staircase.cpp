#include <iostream>

using namespace std;

void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < (n - 1); k++)
        {
            cout << " ";
        }

        for (int j = 0; j < (i + 1); j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    staircase(6);
    return 0;
}
