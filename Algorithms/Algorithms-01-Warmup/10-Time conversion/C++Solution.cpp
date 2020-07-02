#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    
     int time;
     string clock;
     string first;
     if(s.substr(8,2)=="AM")
     {
         first = s.substr(0,2);
        time = stoi(s.substr(0,2));
        if(time == 12)
        {
            first = "00";
        }

         clock = first + s.substr(2,6);
     }
     else
     {
        time = stoi(s.substr(0,2));
        time = time +12;
        first = to_string(time);
        if(time == 24)
        {
            first = "12";
        }
        clock = first + s.substr(2,6);
     }
     return clock;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
