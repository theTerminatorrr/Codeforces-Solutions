#include<bits/stdc++.h>
using namespace std;

#define nl      '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int x;

        for (int i=0; i<n; i++)
        {
            cin >> x;
            int a=sqrt(x);
            if(a*a != x) ans = 1;
        }
        if (ans == 1) cout<<"Yes"<<nl;
        else cout << "No" <<nl;
    }
    return 0;
}

