#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int birthdayCakeCandles(vector<int> candles)
{
    int totalCount = 0;
    sort(candles.begin(), candles.end());
    int candSize = candles.size() - 1;
    for (int i = candles.size() - 1; i >= 0; i--)
    {
        if (candles[i] == candles[candSize])
        {
            totalCount++;
        }
        else
        {
            break;
        }
    }

    cout << totalCount;
    return totalCount;
}

int main(int argc, char const *argv[])
{
    vector<int> candles{4, 4, 3, 1};
    birthdayCakeCandles(candles);
    return 0;
}
