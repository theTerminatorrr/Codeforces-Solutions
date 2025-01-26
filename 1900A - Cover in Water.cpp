#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x ;
        cin >> x;

        string str;
        cin >> str;

        int ans = 0;
        int count = 0;

        for(int i=0; i<x; i++)
        {
            if(str[i] == '.')
            {
                count ++;
                ans ++;
            }

            else count = 0;
            if(count >= 3) break;
        }

        if(count>=3)
        {
            cout << 2 << endl;
        }
        else cout << ans << endl;

    }
}
