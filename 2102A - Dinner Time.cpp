#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n < p)
        {
            cout << "YES" << endl;
            continue;
        }
        long long rem_n = n % p;
        long long num_full_blocks = n / p;
        long long rem_sum = m - num_full_blocks * q;
        if (rem_n == 0)
        {
            if (rem_sum == 0)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<  endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
