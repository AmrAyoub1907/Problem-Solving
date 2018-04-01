#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define bug cout<<"The bug is here!!"<<endl;
#define f first
#define s second
using namespace std;
int n,cnt=0;
char arr[100][100];
int vis[100][100];
bool valid(int i,int j)
{
    return i>=0 && i<n&& j>=0 && j<n;
}
void dfs(int i,int j)
{
    if(!valid(i,j))
        return;
    if(arr[i][j]=='.'||vis[i][j])
        return;
    vis[i][j]=1;

    dfs(i,j+1);
    dfs(i+1,j);
    dfs(i,j-1);
    dfs(i-1,j);
}
int main()
{
    //Ayoub
    int t;
    cin>>t;
    for(int q=1; q<=t; q++)
    {
        cin>>n;
        cnt=0;
        memset(vis,0,sizeof(vis));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                char temp;
                cin>>temp;
                arr[i][j]=temp;
            }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(!vis[i][j] && arr[i][j]=='x')
                {
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        printf("Case %d: %d\n",q,cnt);
    }
    return 0;
}
