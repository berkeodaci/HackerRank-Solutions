#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int times;
    string name;
    long long int num;
    map<string,long long int> myMap;
    cin>>times;
    for(int i = 0 ; i<times;i++)
    {
        cin>>name;
        cin>>num;
        myMap[name]=num;
    }
    while(cin>>name)
    {
        if(myMap.find(name)==myMap.end())
        {
            cout<<"Not found \n";
        }
        else
        {
            cout<<name<<"="<<myMap[name]<<endl;
        }
    }
    return 0;
}
