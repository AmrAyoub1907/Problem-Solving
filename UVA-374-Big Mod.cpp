#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug cout<<"The bug is here!!"<<endl;
#define f first
#define s second
#define Ayoub cin.tie(0);std :: ios :: sync_with_stdio (false);
using namespace std;
ll power(ll x, ll y, ll p)
{
    ll res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    Ayoub
    ll B,P,M;

    while(cin>>B>>P>>M)
        cout<<power(B,P,M)<<endl;
    return 0;
}
