#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int times;
    cin>>times;
    for(int i = 0 ; i<times;i++)
    {
        int num;
        cin>>num;
        if((num!=2 && num%2 ==0)||num == 1)
        {
            cout<<"Not prime\n";
        }
        else if(num ==2)
        {
            cout<<"Prime\n";
        }
        else
        {
            int div = 3;
            int found = 0;
            while(div<=sqrt(num))
            {
                if(num%div == 0)
                {
                    found++;
                }
                div+=2;
                
            }
            if(found == 0)
            {
                cout<<"Prime\n";
            }
            else
            {
                cout<<"Not prime\n";
            }
        }
    } 
    return 0;
}
