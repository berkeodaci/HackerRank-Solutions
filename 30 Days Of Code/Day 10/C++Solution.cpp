#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int num;
    cin >> num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int result=0;
    int count=0;
    while(num > 0)
    {
        int remain = num%2;
        num = num/2;
        if(remain ==1)
        {
            count++;
            if(count>result)
            {
                result = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout<<result;
    return 0;
}
