#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
void minMaxSumUnused(vector<int> arr)
{

    vector<unsigned long int> summerT(5);
    summerT[0] = arr[0] + arr[1] + arr[2] + arr[3]; // 5thless
    summerT[1] = arr[1] + arr[2] + arr[3] + arr[4]; // 1stless
    summerT[2] = arr[0] + arr[2] + arr[3] + arr[4]; // 2ndless
    summerT[3] = arr[0] + arr[1] + arr[3] + arr[4]; // 3rdless
    summerT[4] = arr[0] + arr[1] + arr[2] + arr[4]; // 4thless
    sort(summerT.begin(), summerT.end());
    cout << summerT[0] << "\t" << summerT[4];
}

void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    long minSum = 0, maxSum = 0;
    for (int i = 0; i < 4; i++)
    {
        minSum += arr[i];
    }
    for (int i = 1; i < 5; i++)
    {
        maxSum += arr[i];
    }
    cout << minSum << " " << maxSum;
}

int main(int argc, char const *argv[])
{
    vector<int> arr2{256741038, 623958417, 467905213, 714532089, 938071625};
    miniMaxSum(arr2);
    return 0;
}
