#include <bits/stdc++.h>
#include <csignal>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2!=0)
    {
        cout<<"Weird";
    }
    else if(2<=N && N<5)
    {
        cout<<"Not Weird";
    }
    else if(6<=N && N<=20)
    {
        cout<<"Weird";
    }
    else
    {
        cout<<"Not Weird";
    }
    return 0;
}