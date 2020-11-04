#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

long aVeryBigSum(vector<long> ar)
{
    //Lets sum them all via accumulate
    return accumulate(ar.begin(), ar.end(), 0ll);
}

int main(int argc, char const *argv[])
{
    vector<long> vec{1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    long result = aVeryBigSum(vec);
    cout << result << endl;
    return 0;
}
