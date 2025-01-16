#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

int dx[]= {-1,0,1,0};
int dy[]= {0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            char z=s[i];
            while(s[i]==z)
            {
                i++;
            }
            i--;
            if(mp[z]>1)ans=1;

        }
        if(ans==1)cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }
}

