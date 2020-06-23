#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int getI;
    double getD;
    string getS;
    
    cin>>getI;
    cin>>getD;
    getline(cin>>ws,getS);
    cout<< i + getI<<endl;
    printf("%.1f", d+getD);
    cout<<endl<<s+getS;
    return 0;
}