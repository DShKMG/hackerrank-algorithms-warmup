#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string timeConversion(string s)
{
    stringstream sStr;
    char checkAMPM = s[8]; //Getting A or P
    sStr << s.substr(0, 2);
    int hours = 0;
    sStr >> hours;
    s.pop_back();         // Erasing A or P
    s.pop_back();         // Erasing M
    if (checkAMPM == 'A') // If AM
    {
        if (hours == 12) //If 12 AM = 00
        {
            string doubleOh = "00";
            s.replace(0, 2, doubleOh);
        }
    }
    else
    {
        if (hours != 12) //If not 12 then add 12, if 12 that means 12PM 12:00:00
        {
            hours += 12;
        }
        string subHours = to_string(hours);
        s.replace(0, 2, subHours);
    }
    cout << s;
    return s;
}

int main(int argc, char const *argv[])
{
    string s = {"07:05:45PM"};
    string sHrs = {"12:40:22AM"};
    //cout << s[8]; // Indicates either AM or PM

    timeConversion(s);
    return 0;
}
