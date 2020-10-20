#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for (int k = 0; k < t; ++k)
    {
        int n;
        cin >> n;
        int A[n][n];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> A[i][j];
            }
        }
        int row = 0;
        int column = 0;
        int trace = 0;
        for (int i = 0; i < n; ++i)
        {
            int repeat_row[n + 1] = {0};
            int repeat_column[n + 1] = {0};
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                {
                    trace += A[i][i];
                }

                repeat_row[A[i][j]]++;
                repeat_column[A[j][i]]++;
            }

            for (int j = 1; j <= n; ++j)
            {
                if (repeat_row[j] > 1)
                {
                    row++;
                    break;
                }
            }
            for(int j = 1;j<=n;++j) 
            {
                if (repeat_column[j] > 1)
                {
                    column++;
                    break;
                }
            }
        }
        cout << "Case #"<<k+1<<": "<<trace << " " << row << " " << column<<endl;
    }

    

    return 0;
}

