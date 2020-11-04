#include <iostream>
#include <vector>
using namespace std;

// Complete the plusMinus function below.
void plusMinus(vector<int> arr)
{

    //Program starts below this line
    double plusSign = 0;
    double minusSign = 0;
    double zeros = 0;
    for (auto &&i : arr)
    {
        if (i == 0)
        {
            zeros++;
        }
        else if (i > 0)
        {
            plusSign++;
        }
        else
        {
            minusSign++;
        }
    }
    /*
    cout << "Zeros : " << (plusSign / arr.size()) << endl
         << "Plus : " << (minusSign / arr.size()) << endl
         << "Minus :" << (zeros / arr.size()) << endl; */
    cout << (plusSign / arr.size()) << endl
         << (minusSign / arr.size()) << endl
         << (zeros / arr.size());
}

int main(int argc, char const *argv[])
{
    vector<int> a{-4, 3, -9, 0, 4, 1};
    plusMinus(a);
    return 0;
}
