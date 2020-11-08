#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string myString = {"12"};
    int i, j = 0, k;
    stringstream sStr;
    sStr << myString[0];
    cout << sStr.str();
    return 0;
}
