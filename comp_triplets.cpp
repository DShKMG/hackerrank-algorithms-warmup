#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    //Code is here
    //resultantVector[0] = alice score
    //resultantVector[1] = bob score
    //a[i] = Alice number at i-th index
    //b[i] = Bob number at i-th index
    vector<int> resultantVector{0, 0};
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            resultantVector[0] += 1;
        }
        else if (a[i] == b[i])
        {
            //Do nothing
        }
        else
        {
            resultantVector[1] += 1;
        }
    }
    return resultantVector;
}

int main(int argc, char const *argv[])
{
    vector<int> alice{3, 1, 5};
    vector<int> bob{5, 6, 1};
    vector<int> result = compareTriplets(alice, bob);
    cout << "Alice val : " << result[0] << endl
         << "Bob val : " << result[1];
    return 0;
}
