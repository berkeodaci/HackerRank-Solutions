#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int result=-1000;
    for(int i = 0; i < arr.size()-2;i++)
    {
        for(int j = 0 ; j<arr[i].size()-2;j++)
        {
            int sum =0;
            for(int x = 0; x<3;x++)
            {
                sum+=arr[i][j+x];
                sum+=arr[i+2][j+x];

            }
            sum += arr[i+1][j+1];
            if(sum>result)
            {
                result = sum;
            }

        }
    }
    cout<<result;
    return 0;
}
