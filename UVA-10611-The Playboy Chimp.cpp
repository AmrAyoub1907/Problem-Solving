#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug cout<<"The bug is here!!"<<endl;
#define f first
#define s second
#define Ayoub cin.tie(0);std :: ios :: sync_with_stdio (false);
using namespace std;
int arr[100000];
int are[100000];
int n;
int bsdown(int val)
{
    int lo=0,hi=n-1,med;
    while(lo<=hi)
    {
        med = (lo+hi)/2;
        if(arr[med]<val)
        {
            lo=med+1;
        }
        else
        {
            hi = med-1;
        }
    }
    return arr[hi];
}
int bsup(int val)
{
    int lo=0,hi=n-1,med;
    while(lo<=hi)
    {
        med = (lo+hi)/2;
        if(arr[med]>val)
        {
            hi = med-1;
        }
        else
        {
            lo = med+1;
        }
    }
    return arr[lo];
}
int main()
{
    Ayoub
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
        cin>>are[i];

    for(int i=0; i<q; i++)
    {
        int first = bsdown(are[i]);
        int second = bsup(are[i]);

        if (are[i]<=arr[0]) cout << "X";
        else cout << first;
        if (are[i] >= arr[n-1]) cout << " X" << endl;
        else cout << " " << second << endl;
    }
    return 0;
}
