#include <iostream>
#include <vector>
using namespace std;
// Only use inside the simpleArraySum function code
int simpleArraySum(vector<int> ar)
{
    int sum = 0;
    for (auto &&i : ar)
    {
        sum += i;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    vector<int> ar{3, 5, 6, 7, 9, 1, 0};
    for (auto &&i : ar)
    {
        cout << i << endl;
    }
    int result = simpleArraySum(ar);
    cout << result << endl;
    return 0;
}
