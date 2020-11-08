#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string timeConversion(string s)
{
    string::size_type sztype;
    int hours = (stoi(s.substr(0, 2), &sztype)); // Converts them into int
    cout << hours << endl;
    if (s[8] == 'A') // If AM just pop back AM from the string
    {
        s.pop_back();
        s.pop_back();
        if (hours == 12)
        {
            string doubleOh = "00";
            s.replace(0, 2, doubleOh);
        }
    }
    else
    {
        if (hours != 12)
        {
            hours += 12;
        }
        string subHours = to_string(hours);
        s.replace(0, 2, subHours);
        s.pop_back();
        s.pop_back();
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s = {"07:05:45PM"};
    string sHrs = {"12:40:22AM"};
    //cout << s[8]; // Indicates either AM or PM

    timeConversion(sHrs);
    return 0;
}
