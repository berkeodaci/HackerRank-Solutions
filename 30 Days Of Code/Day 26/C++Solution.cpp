#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int rday,rmon,ryear,day,mon,year;
    cin>>rday>>rmon>>ryear;
    cin>>day>>mon>>year;
    int result;
    if(ryear>year)
    {
        result = 10000;
    }
    else if(year == ryear && rmon > mon)
    {
        result = 500 *(rmon-mon);
    }
    else if(year == ryear && rmon == mon && rday>day)
    {
        result = 15 *(rday-day);
    }
    else
    {
        result =0;
    }
    cout<<result;
    return 0;
}
