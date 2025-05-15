#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        if (n % 2 != 0)
        {
            cout << "4\n";
            cout << "2 " << n << "\n";
            cout << "2 " << n << "\n";
            cout << "1 2\n1 2\n";
        }
        else
        {
            cout << "2\n";
            cout << "1 " << n << "\n";
            cout << "1 " << n << "\n";
        }
    }

    return 0;
}
