#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        string word;
        cin>>word;
        string result1="";
        string result2="";
        for(int i = 0 ; i<word.length();i++)
        {
            if(i%2==0)
            {
                result1 += word.substr(i,1);
            }
            else
            {
                result2 += word.substr(i,1);
            }
        }
        cout<<result1<<" "<<result2<<endl;
    }
    
    return 0;
}
