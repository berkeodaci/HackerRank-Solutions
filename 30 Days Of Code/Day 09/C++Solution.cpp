#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    int result=n;
    if(n>1)
    {
        result *=factorial(n-1);
    }
    return result;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
