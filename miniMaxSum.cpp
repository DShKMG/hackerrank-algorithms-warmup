#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr)
{
    vector<unsigned long int> summerT(5);
    summerT[0] = arr[0] + arr[1] + arr[2] + arr[3]; // 5thless
    summerT[1] = arr[1] + arr[2] + arr[3] + arr[4]; // 1stless
    summerT[2] = arr[0] + arr[2] + arr[3] + arr[4]; // 2ndless
    summerT[3] = arr[0] + arr[1] + arr[3] + arr[4]; // 3rdless
    summerT[4] = arr[0] + arr[1] + arr[2] + arr[4]; // 4thless

    for (auto &&i : summerT)
    {
        cout << "Val : " << i;
    }
    cout << endl;

    auto result = std::minmax_element(summerT.begin(), summerT.end());
    cout << *result.first << " " << *result.second;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{156873294, 719583602, 581240736, 605827319, 895647130};
    vector<int> arr2{256741038, 623958417, 467905213, 714532089, 938071625};
    auto resu = max_element(begin(arr2), end(arr2));
    auto resu2 = min_element(begin(arr2), end(arr2));
    std::cout << "Lowest : " << *resu2 << " Highest : " << *resu;
    /*
    int ar[5] = {1, 2, 3, 4, 5};
    miniMaxSum(arr2);*/
    return 0;
}
