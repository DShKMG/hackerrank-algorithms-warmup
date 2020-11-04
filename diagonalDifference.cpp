#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
//Only use this code in the int diagonalDifference(vector<vector<int>> arr)

int diagonalDifference(vector<vector<int>> arr)
{
    int diagLeft = 0;
    int diagright = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        diagLeft += arr[i][i];
        diagright += arr[i][arr.size() - 1 - i];
        //cout << arr[0].size() - i << endl;
    }

    return abs(diagLeft - diagright);
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{{8, 3, 4}, {1, 3, 1}, {1, 13, 0}};

    cout << arr.size();
    int diagSum = diagonalDifference(arr);
    cout << endl
         << diagSum;
    return 0;
}